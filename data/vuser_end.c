vuser_end()
{

	lr_think_time(10);

	web_websocket_send("ID=0", 
		"Buffer={\"id\":10,\"method\":\"keepalive\",\"params\":{},\"jsonrpc\":\"2.0\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive12*/

	web_add_cookie("tmr_reqNum=920; DOMAIN=portal.mail.ru");

	web_add_auto_header("Origin", 
		"https://e.mail.ru");

	lr_think_time(6);

	web_url("NaviData_5", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&gamescnt=1&Login=sirotkina2t%40mail.ru&_=0.3418881946268446", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/1:121dc92c89b109ba:0/?back=1", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("logout");

	web_websocket_send("ID=0", 
		"Buffer={\"id\":11,\"method\":\"keepalive\",\"params\":{},\"jsonrpc\":\"2.0\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive13*/

	web_revert_auto_header("Origin");

	web_url("NaviData_6", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login=sirotkina2t%40mail.ru&_=0.2963378369031177", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/1:121dc92c89b109ba:0/?back=1", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("tmr_reqNum=925; DOMAIN=e.mail.ru");

	web_custom_request("batch_31", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/1:121dc92c89b109ba:0/?back=1", 
		"Snapshot=t74.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%22102800%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_tab_unload-visible%22%2C%22uid%22%3A%22342%22%7D%5D", 
		LAST);

	web_add_cookie("b=VkkKAKBoCw0AoSibClFWvQupxlgKKZ7FCLkRZAzhSaIIwRZkDMNZpAodNU4L8Q6WCQcAAAAhTD9Oc4Tz/+eJUGr1jAAA; DOMAIN=mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAYH0gcA; DOMAIN=mail.ru");

	web_add_cookie("s=a=0|octavius=1|fver=0|ww=1536|wh=745|rt=1|dpr=1.25; DOMAIN=mail.ru");

	web_add_cookie("tmr_reqNum=925; DOMAIN=mail.ru");

	web_add_cookie("i=AQAkrLBgAwATAAgHAjwJAXseAV0GBQIBAL0HCAQBghUB; DOMAIN=mail.ru");

	web_add_cookie("VID=1su56z1-5FI200000U0yD4o2:::5cb2adf-0-0-5c34c21:CAASENuMjQyIVX3MXr9LDH0jmL8aYENRqhcC8zDvEz-FzGP_Z4YPaCTgYpIGhO61cV-GI6jecJqbk-tcQvxZ6kTc63b7nVCpeAz5QhT3SDqp5PwlJga9EkYW6Re4gYDrVlArERntnbJuJ6UseIC_GIodJHmIqg; DOMAIN=mail.ru");

	web_add_cookie("c=RdKwYAIAEHsTAAAUAAAAM811AgAI; DOMAIN=mail.ru");

	web_add_cookie("act=066f596a5da744afb772f709963e3155; DOMAIN=mail.ru");

	web_add_cookie("tmr_detect=1%7C1622200812290; DOMAIN=mail.ru");

	web_reg_find("Text=Mail.ru: почта, поиск в интернете, новости, игры", 
		LAST);

	web_url("logout", 
		"URL=https://auth.mail.ru/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/inbox/1:121dc92c89b109ba:0/?back=1", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("batch_32", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/1:121dc92c89b109ba:0/?back=1", 
		"Snapshot=t76.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%22134565.6248%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-unload%22%2C%22i%22%3A%22beforeunload%3A134565.6248%2Ctype_score_5m%3A134565.6248%22%2C%22uid%22%3A%22343%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adv_schedule-autoupdate%22%2C%22uid%22%3A%22344%22%7D%5D", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	web_add_cookie("tmr_reqNum=925; DOMAIN=portal.mail.ru");

	web_add_header("Origin", 
		"https://mail.ru");

	web_url("NaviData_7", 
		"URL=https://portal.mail.ru/NaviData?mac=1&gamescnt=1&Socials=1&rnd=1622201000392", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/?from=logout", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	return 0;
}