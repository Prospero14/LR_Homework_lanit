vuser_init()
{


	web_set_sockets_option("SSL_VERSION", "AUTO");
		
		headers();

		cookies();
		lr_start_transaction("UC01_loading");

/*Correlation comment - Do not change!  Original value='ffacc49a9e534521af9cc56a26ee7d60' Name ='token_2' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=token_2",
		"RegExp=act=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);

	web_url("mail.ru", 
		"URL=https://{host_mail_ru}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NaviData", 
		"URL=https://{host_portal_mail_ru}/NaviData?mac=1&Socials=1&ldata=1&_=0.39873219715028707", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host_mail_ru}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("info", 
		"URL=https://{host_auth_mail_ru}/api/v1/pushauth/info?login={login_name}%40{host_mail_ru}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host_mail_ru}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("UC01_loading", LR_AUTO);

lr_start_transaction("UC02_auth");

	web_submit_data("auth",
		"Action=https://{host_auth_mail_ru}/jsapi/auth",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=application/json",
		"Referer=https://{host_mail_ru}/",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=login", "Value={email}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=saveauth", "Value=0", ENDITEM,
		"Name=token", "Value={token_2}", ENDITEM,
		"Name=project", "Value=e.mail.ru", ENDITEM,
		LAST);
lr_end_transaction("UC02_auth", LR_AUTO);

}
