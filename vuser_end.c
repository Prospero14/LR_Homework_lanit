vuser_end()
{
	lr_start_transaction("UC06_logout");

	web_url("logout",
		"URL={email_auth}/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2F{emailhost}%2F%3Ffrom%3Dlogout",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t75.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("UC06_logout",LR_AUTO);
	lr_end_transaction("UC_check_email", LR_AUTO);

	return 0;
}