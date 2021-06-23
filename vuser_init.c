vuser_init()
{	
	cookies();
	headers();
	lr_start_transaction("UC_check_email");

	lr_start_transaction("UC01_loading");

/*Correlation comment - Do not change!  Original value='066f596a5da744afb772f709963e3155' Name ='act_token' Type ='ResponseBased'*/

	web_reg_save_param_regexp(
		"ParamName=act_token",
		"RegExp=act=(.*?);",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=COOKIES",
		"RequestUrl=*/{emailhost}/*",
		LAST);

/*Correlation comment - Do not change!  Original value='https://e.{emailhost}' Name ='Action' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=Action",
		"RegExp==\\ '(.*?)/settings",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/{emailhost}/*",
		LAST);

	web_url("{emailhost}", 
		"URL=https://{emailhost}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_convert_param("Action_URL2",
		"SourceString={Action}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);


	lr_end_transaction("UC01_loading",LR_AUTO);

	lr_start_transaction("UC02_login");

	web_submit_data("auth",
		"Action={email_auth}/cgi-bin/auth?from=splash",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{emailhost}/",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=Domain", "Value={emailhost}", ENDITEM,
		"Name=Login", "Value={LOGIN}", ENDITEM,
		"Name=Password", "Value={PASSWORD}", ENDITEM,
		"Name=new_auth_form", "Value=1", ENDITEM,
		"Name=FromAccount", "Value=1", ENDITEM,
		"Name=act_token", "Value={act_token}", ENDITEM,
		LAST);
	
	lr_end_transaction("UC02_login", LR_AUTO);

	return 0;
}
