Action()
{
	int i;	
	randomletter();
	
	lr_output_message("%s", lr_eval_string("{SearchValue}"));
	lr_start_transaction("UC_sending_emails");
	lr_start_transaction("UC03_open_inbox");

	web_url("inbox", 
		"URL=https://{host_e_mail_ru}/messages/inbox/?back=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host_mail_ru}/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='a55eaa17173a0a52cd9472972701b29d:767f7b4270005b07195507025c5250040505040054095600075550080005030007050609085a0309551654475c6e4206' Name ='token' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=token",
		"RegExp=\"token\":\"(.*?)\",",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("inbox_2", 
		"URL=https://{host_e_mail_ru}/messages/inbox/?back=1&afterReload=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host_e_mail_ru}/messages/inbox/?back=1", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_convert_param("token_URL2",
		"SourceString={token}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);
		
lr_end_transaction("UC03_open_inbox", LR_AUTO);
	
	web_url("NaviData_2", 
		"URL=https://{host_portal_mail_ru}/NaviData?mac=1&Socials=1&ldata=1&Login={login_name}%40{host_mail_ru}&_=0.8529060765661469", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host_e_mail_ru}/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("aliases",
		"URL=https://{host_e_mail_ru}/api/v1/aliases?email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token}&_=1622200143982",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/messages/inbox/?back=1&afterReload=1",
		"Snapshot=t50.inf",
		"Mode=HTML",
		LAST);

	web_websocket_connect("ID=0",
		"URI=wss://{host_rebus_e_mail_ru}/api/v2/ws?email={login_name}%40{host_mail_ru}&token={token_URL2}",
		"Origin=https://{host_e_mail_ru}",
		"OnOpenCB=OnOpenCB0",
		"OnMessageCB=OnMessageCB0",
		"OnErrorCB=OnErrorCB0",
		"OnCloseCB=OnCloseCB0",
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"id\":1,\"method\":\"subscribe\",\"params\":{\"system\":\"storage\",\"event\":\"change\"},\"jsonrpc\":\"2.0\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_url("p2p", 
		"URL=https://calls.{host_mail_ru}/embed/p2p/?email={login_name}%40{host_mail_ru}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host_e_mail_ru}/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("requests",
		"URL=https://{host_e_mail_ru}/api/v1/messages/search/requests?query=&limit=5&email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token}&_=1622200145768",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t66.inf",
		"Mode=HTML",
		LAST);

	web_url("security",
		"URL=https://{host_e_mail_ru}/api/v1/golang/user/security?email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token}&_=1622200145819",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t67.inf",
		"Mode=HTML",
		LAST);

	web_url("short",
		"URL=https://{host_e_mail_ru}/api/v1/user/short?email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token}&_=1622200145838",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t71.inf",
		"Mode=HTML",
		LAST);

	web_url("token", 
		"URL=https://calls.{host_mail_ru}/api/v1/token", 
		"Resource=0", 
		"Referer=https://calls.{host_mail_ru}/embed/p2p/?email={login_name}%40{host_mail_ru}", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_url("unread",
		"URL=https://{host_e_mail_ru}/api/v1/golang/messages/services/cleanmaster/unread?email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token}&_=1622200146448",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t80.inf",
		"Mode=HTML",
		LAST);

/*Correlation comment - Do not change!  Original value='343576765709894559219451055796794951:767f7b4270005b07190706040c040702040104030c010e0100030d03050b050c0107040c0e01070708030c0204105547506e4607' Name ='token_1' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=token_1",
		"QueryString=$.body.token",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("short_2",
		"Action=https://{host_e_mail_ru}/api/v1/user/short",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t81.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=email", "Value={email}", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token}", ENDITEM,
		LAST);

	web_url("manifest.json", 
		"URL=https://{host_e_mail_ru}/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_url("suggest",
		"URL=https://{host_e_mail_ru}/api/v1/ab/smart/suggest?search=z&limit=16&email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token_1}&_=1622200149025",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t93.inf",
		"Mode=HTML",
		LAST);
				
	
		for(i=0; i<3; i++)
{
lr_start_transaction("UC04_send");

	web_submit_data("send",
		"Action=https://{host_e_mail_ru}/api/v1/messages/send",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t124.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=from", "Value=Runtime Error <{email}>", ENDITEM,
		"Name=id", "Value=e977B5A3a2143ebA34C928d8E821b98A", ENDITEM,
		"Name=source", "Value={\"draft\":\"\",\"reply\":\"\",\"forward\":\"\",\"schedule\":\"\"}", ENDITEM,
		"Name=headers", "Value={}", ENDITEM,
		"Name=template", "Value=0", ENDITEM,
		"Name=sign", "Value=0", ENDITEM,
		"Name=remind", "Value=0", ENDITEM,
		"Name=receipt", "Value=false", ENDITEM,
		"Name=subject", "Value=", ENDITEM,
		"Name=priority", "Value=3", ENDITEM,
		"Name=send_date", "Value=", ENDITEM,
		"Name=body", "Value={\"html\":\"<div>{SearchValue}</div><div>&nbsp;</div><div data-signature-widget=\\\"container\\\"><div data-signature-widget=\\\"content\\\"><div>--<br>Runtime Error</div></div></div>\",\"text\":\"ssssssssss\\n"
		"\\n"
		"\\n"
		"ПОДПИСЬ\\n"
		"--\\n"
		"Runtime Error\"}", ENDITEM,
		"Name=correspondents", "Value={\"to\":\"{client_adress}\",\"cc\":\"\",\"bcc\":\"\"}", ENDITEM,
		"Name=folder_id", "Value=", ENDITEM,
		"Name=sending", "Value=true", ENDITEM,
		"Name=compose_stat", "Value={\"user_track\":\"m|286|665|3|1;m|432|6|1|1;m|201|109|1|1;m|201|5|1|0;k|998|6;k|2849|6;m|2739|228|2|1;m|201|50|1|0;c|203|0|399|261;m|18|17|1|0;m|819|4|1|1;m|402|3|1|1;m|201|36|1|1;m|202|27|1|0;m|201|240|2|1;m|201|113|1|0;m|202|47|1|0;m|202|13|1|0;m|209|11|1|0;m|202|1|1|0;c|21|0|437|726\",\"build\":\"release-fmail-13040.+053370-01-11T20_33_29\",\"serverTime\":1622028430529}", ENDITEM,
		"Name=delay_for_cancellation", "Value=false", ENDITEM,
		"Name=attaches", "Value={\"list\":[]}", ENDITEM,
		"Name=email", "Value={email}", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token_1}", ENDITEM,
		LAST);
lr_end_transaction("UC04_send", LR_AUTO);
		}
	
	web_url("thread",
		"URL=https://{host_e_mail_ru}/api/v1/threads/thread?quotes_version=1&id=19zjBuaX&email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token_1}&_=1622200158441",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t125.inf",
		"Mode=HTML",
		LAST);

	web_url("thread_2",
		"URL=https://{host_e_mail_ru}/api/v1/threads/thread?quotes_version=1&id=19zjBuaX&email={login_name}%40{host_mail_ru}&htmlencoded=false&token={token_1}&_=1622200161284",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{host_e_mail_ru}/inbox/?back=1&afterReload=1",
		"Snapshot=t135.inf",
		"Mode=HTML",
		LAST);
		lr_end_transaction("UC_sending_emails", LR_AUTO);

}