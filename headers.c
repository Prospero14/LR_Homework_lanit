
headers(){
	
	web_add_header("Sec-Fetch-Site",
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");
	
	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
		
	web_add_header("X-Email", 
		"{login_name}@{host_mail_ru}");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_add_auto_header("Origin", 
		"https://{host_e_mail_ru}");
	
	web_add_header("X-Request-Id",
		"98f9989-e36e-5dbc-14e-57a55ec9fd56");


	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
	
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
}