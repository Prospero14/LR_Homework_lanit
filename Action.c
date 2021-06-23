Action()
{	


	int i;
	int totalMsg;
	int randMsg;
	char stringId[20];
	char stringIdMsg[20];
	
	/*Correlation comment - Do not change!  Original value='e0fc8c70b1e963eaee93236cc53462e9:6d457a4563616851195102515a0b5202025602560c0f0450545351080700020f5354040a0d0e0355081654475c6e4206' Name ='token' Type ='ResponseBased'*/
	
	web_reg_save_param_regexp(
		"ParamName=token",
		"RegExp=\"token\":\"(.*?)\",",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/inbox/*",
		LAST);

	web_url("sdc",
		"URL={email_auth}/sdc?from={Action_URL2}%2Fmessages%2Finbox%2F%3Fback%3D1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={Action}/messages/inbox/?back=1",
		"Snapshot=t5.inf",
		"Mode=HTML",
		LAST);

	web_convert_param("token_URL2",
		"SourceString={token}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_url("aliases",
		"URL={Action}/api/v1/aliases?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200890463",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/messages/inbox/?back=1",
		"Snapshot=t10.inf",
		"Mode=HTML",
		LAST);

/*Correlation comment - Do not change!  Original value='1:dd3dc9e18d164689:0' Name ='id' Type ='ResponseBased'*/


/*Correlation comment - Do not change!  Original value='16219544820268989070' Name ='id_1' Type ='ResponseBased'*/

	web_reg_save_param_regexp(
		"ParamName=messages_unread",
		"RegExp=\"Входящие\",\"messages_unread\":(.*?),",
		"Ordinal=all",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/smart*",
		"IgnoreRedirections=Yes",
		LAST);

	web_reg_save_param_regexp(
		"ParamName=id",
		"RegExp=\"id\":\"(1:.*?:0)\",",
		"Ordinal=all",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/smart*",
		"IgnoreRedirections=Yes",
		LAST);	
		
	web_reg_save_param_regexp(
		"ParamName=id_1",
		"RegExp=\"last\":\"(.*?)\",\"expand\"",
		"Ordinal=all",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/smart*",
		"IgnoreRedirections=Yes",
		LAST);	
		
	web_url("smart",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&pinned_limit=0&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200890478",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/messages/inbox/?back=1",
		"Snapshot=t11.inf",
		"Mode=HTML",
		LAST);
			
	totalMsg = atoi(lr_eval_string("{messages_unread_1}"));

	lr_output_message("Unread - %d", totalMsg);
	
	if(totalMsg == 0){

		lr_message("No messages left, stop right now, criminal!");

		lr_abort( );
		
		return 0;
	}
	
	randMsg = randomNumber(totalMsg);
	
	sprintf(stringId, "{id_%d}", randMsg);
	
	sprintf(stringIdMsg, "{id_1_%d}", randMsg);
	
	lr_save_string(lr_eval_string(stringId), "id");
	
	lr_save_string(lr_eval_string(stringIdMsg), "id_1");
	
	
	web_convert_param("id_URL2",
		"SourceString={id}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_submit_data("update",
		"Action={Action}/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t18.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=index", "Value=305", ENDITEM,
		"Name=update", "Value={\"count\":{\"show\":true}}", ENDITEM,
		"Name=email", "Value={LOGIN}@{emailhost}", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token}", ENDITEM,
		LAST);

	web_url("requests",
		"URL={Action}/api/v1/messages/search/requests?query=&limit=5&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200899051",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t27.inf",
		"Mode=HTML",
		LAST);

	web_url("security",
		"URL={Action}/api/v1/golang/user/security?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200901790",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t29.inf",
		"Mode=HTML",
		LAST);

	web_url("short",
		"URL={Action}/api/v1/user/short?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200901794",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t30.inf",
		"Mode=HTML",
		LAST);

	web_url("unread",
		"URL={Action}/api/v1/golang/messages/services/cleanmaster/unread?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200901980",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t32.inf",
		"Mode=HTML",
		LAST);

	lr_start_transaction("UC03_open_folder");

	web_url("smart_3",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200890&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200929275",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t42.inf",
		"Mode=HTML",
		LAST);

	web_url("srv-st.json",
		"URL={Action}/srv-st.json?_=0.7241460109802967",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t44.inf",
		"Mode=HTML",
		LAST);

	web_url("hash",
		"URL={Action}/api/v1/utils/sota/hash?token={token_URL2}&email={LOGIN}%40{emailhost}&_=0.06565216205244595",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t45.inf",
		"Mode=HTML",
		LAST);

	web_url("smart_4",
		"URL={Action}/api/v1/messages/replies/smart?id={id_1}&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200931349",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t46.inf",
		"Mode=HTML",
		LAST);

	web_submit_data("marks",
		"Action={Action}/api/v1/messages/marks",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t49.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=marks", "Value=[{\"name\":\"unread\",\"unset\":[\"{id_1}\"],\"folder\":0}]", ENDITEM,
		"Name=email", "Value={LOGIN}@{emailhost}", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token}", ENDITEM,
		LAST);

	web_url("smart_5",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200890&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200931999",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t50.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("UC03_open_folder",LR_AUTO);

	lr_start_transaction("UC04_read_msgs");

	web_url("smart_6",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200932&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200964336",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t55.inf",
		"Mode=HTML",
		LAST);

	web_url("srv-st.json_2",
		"URL={Action}/srv-st.json?_=0.8656844397856618",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t58.inf",
		"Mode=HTML",
		LAST);

	web_url("hash_2",
		"URL={Action}/api/v1/utils/sota/hash?token={token_URL2}&email={LOGIN}%40{emailhost}&_=0.7314409393509602",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t59.inf",
		"Mode=HTML",
		LAST);
lr_end_transaction("UC04_read_msgs", LR_AUTO);
lr_start_transaction("UC05_move_msg");

	web_submit_data("move",
		"Action={Action}/api/v1/threads/move",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t62.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=ids", "Value=[\"{id}\"]", ENDITEM,
		"Name=msg_ids", "Value=[{\"id\":\"{id}\",\"folder\":\"0\"}]", ENDITEM,
		"Name=folder", "Value=1", ENDITEM,
		"Name=message_id_last", "Value={\"{id}\":\"{id_1}\"}", ENDITEM,
		"Name=email", "Value={LOGIN}@{emailhost}", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token}", ENDITEM,
		LAST);
	lr_end_transaction("UC05_move_msg", LR_AUTO);

	web_url("smart_7",
		"URL={Action}/api/v1/messages/replies/smart?id=16219534431185229338&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200966325",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t63.inf",
		"Mode=HTML",
		LAST);

	web_url("smart_8",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200932&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200966658",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t65.inf",
		"Mode=HTML",
		LAST);

	web_url("smart_9",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200966&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200967355",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t68.inf",
		"Mode=HTML",
		LAST);	
	

	return 0;
}
