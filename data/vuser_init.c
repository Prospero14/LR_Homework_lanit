/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("start");

	web_add_cookie("searchuid=8335520381534777444; DOMAIN=mail.ru");

	web_add_cookie("b=VkkIAKBoCw0AoSibClFWvQupxlgKKZ7FCLkRZAzhSaIIwRZkDMNZpAoHAAAAIUw/TnOE8//niVBq9YwA; DOMAIN=mail.ru");

	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN=mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAACAABoJ0AcA; DOMAIN=mail.ru");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN=mail.ru");

	web_add_cookie("s=a=0|octavius=1|fver=0|ww=1536|wh=745|dpr=1.25|rt=1; DOMAIN=mail.ru");

	web_add_cookie("FTID=0; DOMAIN=mail.ru");

	web_add_cookie("tmr_reqNum=875; DOMAIN=mail.ru");

	web_add_cookie("i=AQAkrLBgAwATAAgHAjwJAXseAl0GBQIBAL0HCAQBghUB; DOMAIN=mail.ru");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN=mail.ru");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN=mail.ru");

	web_add_cookie("VID=1su56z1-5FI200000U0yD4o2:::5c7ad75-0-0-5c34c21:CAASECRw_n-P7w4DK-AoMEGlyHYaYKYlG3mwE5CQyZwleppRZ_Bfgc4k3fNMQB4DOrBUAbBS-Ykllq8VsBAzp1Q_U1PoOlWA8VGRfoxesoAOVc-2IYsd2VAa5B9n1RoQXLBpDZKnGh3wpjQ4JUcu1FMdEOFIuQ; DOMAIN=mail.ru");

	web_add_cookie("c=FtCwYAEAAHsTAAAUAAAACQAQ; DOMAIN=mail.ru");

	web_reg_find("Text=Mail.ru: почта, поиск в интернете, новости, игры", 
		LAST);

	web_url("mail.ru", 
		"URL=https://mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN=portal.mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAACAABoJ0AcA; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN=portal.mail.ru");

	web_add_cookie("s=a=0|octavius=1|fver=0|ww=1536|wh=745|dpr=1.25|rt=1; DOMAIN=portal.mail.ru");

	web_add_cookie("FTID=0; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_reqNum=879; DOMAIN=portal.mail.ru");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN=portal.mail.ru");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN=portal.mail.ru");

	web_add_cookie("VID=1su56z1-5FI200000U0yD4o2:::5c7ad75-0-0-5c34c21:CAASEF1E2LIQUAGCx2HZ4TlyJz0aYCrMfqy6YRjRsurW68CvPrwUmTLwy66D6auVA36hGNl9NR0ZUdEqY3zLZ3TRpfaWH-Bij-MAwIt9q6d7oRS_i_Gb7HDK1WUuA9pWiQgRI9kkhbCx_vge3MMs3uwjwZgx1Q; DOMAIN=portal.mail.ru");

	web_add_auto_header("Origin", 
		"https://mail.ru");

	web_url("NaviData", 
		"URL=https://portal.mail.ru/NaviData?mac=1&gamescnt=1&Socials=1&rnd=1622200797465", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("start",LR_AUTO);

	lr_start_transaction("login");

	web_add_cookie("tmr_reqNum=885; DOMAIN=portal.mail.ru");

	web_revert_auto_header("Origin");

	web_url("NaviData_2", 
		"URL=https://portal.mail.ru/NaviData?mac=1&gamescnt=1&Socials=1&rnd=1622200857489", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN=e.mail.ru");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN=e.mail.ru");

	web_add_cookie("FTID=0; DOMAIN=e.mail.ru");

	web_add_cookie("tmr_reqNum=885; DOMAIN=e.mail.ru");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN=e.mail.ru");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN=e.mail.ru");

	web_add_cookie("sdcs=VIU9r65oLnzEdjqR; DOMAIN=e.mail.ru");

	web_reg_find("Text=Перенаправление", 
		LAST);

	web_submit_data("auth", 
		"Action=https://auth.mail.ru/cgi-bin/auth?from=splash", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://mail.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Domain", "Value=mail.ru", ENDITEM, 
		"Name=Login", "Value=sirotkina2t", ENDITEM, 
		"Name=Password", "Value=Test2?6?", ENDITEM, 
		"Name=new_auth_form", "Value=1", ENDITEM, 
		"Name=FromAccount", "Value=1", ENDITEM, 
		"Name=act_token", "Value=066f596a5da744afb772f709963e3155", ENDITEM, 
		LAST);

	web_add_cookie("sdcs=ncIdMHKbWrDFqSia; DOMAIN=e.mail.ru");

	web_reg_find("Text=Почта Mail.ru", 
		LAST);

	web_url("sdc", 
		"URL=https://auth.mail.ru/sdc?from=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("batch", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t6.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22pk-xray-ready%22%2C%22uid%22%3A%220%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22old%3A1%2Cperformance%3A1%2Cload-time%3A1991%2Chttp1%3A1%2Cspd-unknown%3A1%2Cvisible%3A1%22%2C%22t%22%3A%22html-hit%22%2C%22uid%22%3A%221%22%7D%5D", 
		LAST);

	web_add_header("Origin", 
		"https://e.mail.ru");

	web_url("NaviData_3", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login=sirotkina2t%40mail.ru&_=0.4117573016549309", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("batch_2", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t8.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-0%22%2C%22uid%22%3A%222%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-01%22%2C%22uid%22%3A%223%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-device%22%2C%22i%22%3A%22type_unk%3A1%2Cexp_high%3A1%22%2C%22uid%22%3A%224%22%7D%2C%7B%22v%22%3A%225.600000000000136%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-nav-net%22%2C%22i%22%3A%22dns%3"
		"A0%2Ctcp%3A0.10000000000013642%2Crequest%3A0.2999999999999545%2Cresponse%3A5.2000000000000455%22%2C%22uid%22%3A%225%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-conn%22%2C%22i%22%3A%22effective_type_unk%3A1%22%2C%22uid%22%3A%226%22%7D%2C%7B%22v%22%3A%222048.0248%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-init%22%2C%22i%22%3A%22ver_300000002%3A1%2Cscore_moderate%3A2048.0248%22%2C%22uid%22%3A%227%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%2"
		"2%3A%22xray_loadflow_step-8%22%2C%22uid%22%3A%228%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22start%3A1%22%2C%22prot%22%3A%22http1%22%2C%22speed%22%3A%22unknown%22%2C%22t%22%3A%22try_js_ajax%22%2C%22uid%22%3A%229%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-28%22%2C%22uid%22%3A%2210%22%7D%5D", 
		LAST);

	web_custom_request("batch_3", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t9.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-13%22%2C%22uid%22%3A%2211%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22load%3A1%2Cstatus_200%3A1%2Cready_state_4%3A1%2Cduration%3A845%22%2C%22prot%22%3A%22http1%22%2C%22speed%22%3A%22unknown%22%2C%22t%22%3A%22try_js_ajax%22%2C%22uid%22%3A%2212%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22evalok%3A1%22%2C%22prot%22%3A%22http1%22%2C%22speed%22%3A%22unknown%22"
		"%2C%22t%22%3A%22try_js_ajax%22%2C%22uid%22%3A%2213%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-23%22%2C%22uid%22%3A%2214%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-17%22%2C%22uid%22%3A%2215%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-26%22%2C%22uid%22%3A%2216%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-24%22"
		"%2C%22uid%22%3A%2217%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-18%22%2C%22uid%22%3A%2218%22%7D%5D", 
		LAST);

	web_add_header("X-Request-Id", 
		"4712f3f8-8fc5-deef-16b9-23c47746c40c");

	web_url("aliases", 
		"URL=https://e.mail.ru/api/v1/aliases?email=sirotkina2t%40mail.ru&htmlencoded=false&token=e0fc8c70b1e963eaee93236cc53462e9:6d457a4563616851195102515a0b5202025602560c0f0450545351080700020f5354040a0d0e0355081654475c6e4206&_=1622200890463", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Request-Id", 
		"87ad4e7b-1527-76da-d151-edbd1879769a");

	web_url("smart", 
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&pinned_limit=0&offset=0&email=sirotkina2t%40mail.ru&htmlencoded=false&token=e0fc8c70b1e963eaee93236cc53462e9:6d457a4563616851195102515a0b5202025602560c0f0450545351080700020f5354040a0d0e0355081654475c6e4206&_=1622200890478", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"id\":1,\"method\":\"subscribe\",\"params\":{\"system\":\"storage\",\"event\":\"change\"},\"jsonrpc\":\"2.0\"}", 
		"IsBinary=0", 
		LAST);

	web_add_header("X-Request-Id", 
		"19e4d761-8843-5173-ba9c-2da51a11ad24");

	web_websocket_connect("ID=0", 
		"URI=wss://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622194832&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email=sirotkina2t%40mail.ru&htmlencoded=false&token=e0fc8c70b1e963eaee93236cc53462e9:6d457a4563616851195102515a0b5202025602560c0f0450545351080700020f5354040a0d0e0355081654475c6e4206&_=1622200891079", 
		"Origin=https://e.mail.ru", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("batch_4", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t13.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22init%3A1%2Cbr-ie_init%3A1%22%2C%22dwh%22%3A%22%7B%5C%22searchuid%5C%22%3A%5C%228335520381534777444%5C%22%7D%22%2C%22t%22%3A%22adman%22%2C%22uid%22%3A%2219%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-20%22%2C%22uid%22%3A%2220%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-20%22%2C%22uid%22%3A%2221%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%"
		"22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-25%22%2C%22uid%22%3A%2222%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-19%22%2C%22uid%22%3A%2223%22%7D%5D", 
		LAST);

	web_custom_request("batch_5", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
		"Snapshot=t14.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_on_route_!septimaMsglist%22%2C%22uid%22%3A%2224%22%7D%2C%7B%22v%22%3A%225230%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_parse_all%22%2C%22uid%22%3A%2225%22%7D%2C%7B%22v%22%3A%2217%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_ductus_feast%22%2C%22uid%22%3A%2226%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_on_layout_resize_l%22%2C%22uid%22%3A%2227%22%7D%5D", 
		LAST);

	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN=ad.mail.ru");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN=ad.mail.ru");

	web_add_cookie("FTID=0; DOMAIN=ad.mail.ru");

	web_add_cookie("tmr_reqNum=885; DOMAIN=ad.mail.ru");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN=ad.mail.ru");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN=ad.mail.ru");

	web_add_auto_header("Origin", 
		"https://e.mail.ru");

	web_url("adp", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&_=1622200893594&version=octavius&count=1&exp_id=244&w=240&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&DT_listButtonTextColor=333333&"
		"DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&directLoadErrorCallback=direct81l4z5kvz8tv&mail_event=login&ponymode=0&in3paneMetathread=0&email=sirotkina2t%40mail.ru&fid=3879c6f149e0ce833a8e5ab9ec185311&q[]=216790.0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_2", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&_=1622200893588&version=octavius&exp_id=244&w=240&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&DT_listButtonTextColor=333333&"
		"DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&directLoadErrorCallback=direct81l4z5kvz8tv&mail_event=login&ponymode=0&in3paneMetathread=0&email=sirotkina2t%40mail.ru&fid=3879c6f149e0ce833a8e5ab9ec185311&q[]=2200&q[]=231758&q[]=244983&q[]="
		"474898", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("batch_6", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t17.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%2289.90000000000145%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-api%22%2C%22i%22%3A%22x-user_short-hit%3A20076.9%2Cx-user_short-l_5%3A3170%2Cx-user_short-h_200%3A20076.9%2Cx-user_short-a_200%3A20076.9%2Cx-user_short-s_30s%3A20076.9%2Cx-aliases-hit%3A89.90000000000145%2Cx-aliases-l_1%3A74%2Cx-aliases-h_200%3A89.90000000000145%2Cx-aliases-a_200%3A89.90000000000145%22%2C%22uid%22%3A%2228%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22200%3A90%2Caliase"
		"s_200%3A90%2Cfast_method%3A90%2Cfast_method_timeout_pass%3A90%22%2C%22t%22%3A%22p_API%22%2C%22uid%22%3A%2230%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-20%22%2C%22uid%22%3A%2231%22%7D%2C%7B%22v%22%3A%2217290.8%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-nav-dom-ready%22%2C%22i%22%3A%22interactive%3A1505.2999999999997%2Ccontent-loaded%3A1.5%2Ccomplete%3A15784%22%2C%22uid%22%3A%2232%22%7D%2C%7B%22v%22%3A%2217291.6%22%2C%22skipdwh%22%3A%22true%22"
		"%2C%22t%22%3A%22pk-nav-dom-load%22%2C%22i%22%3A%22ready%3A17290.8%2Cload%3A0.7999999999992724%22%2C%22uid%22%3A%2233%22%7D%2C%7B%22v%22%3A%22152.70000000000073%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-api%22%2C%22i%22%3A%22x-threads_status_smart-hit%3A152.70000000000073%2Cx-threads_status_smart-l_50%3A28884%2Cx-threads_status_smart-h_200%3A152.70000000000073%2Cx-threads_status_smart-a_200%3A152.70000000000073%22%2C%22uid%22%3A%2234%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%2"
		"2%2C%22i%22%3A%22200%3A153%2Cthreads_status_smart_200%3A153%2Cfast_method%3A153%2Cfast_method_timeout_pass%3A153%22%2C%22t%22%3A%22p_API%22%2C%22uid%22%3A%2235%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22count%5C%22%3A15%2C%5C%22priority_count%5C%22%3A0%2C%5C%22unread_count%5C%22%3A14%2C%5C%22priority_unread_count%5C%22%3A0%7D%22%2C%22t%22%3A%22p_threads_status_smart%22%2C%22uid%22%3A%2236%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22"
		"%3A%22p_threads_status_smart%22%2C%22uid%22%3A%2237%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_on_folder_navigate_0%22%2C%22uid%22%3A%2238%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_on_route_letters%22%2C%22uid%22%3A%2239%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-20%22%2C%22uid%22%3A%2240%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-20%2"
		"2%2C%22uid%22%3A%2241%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22time%3A29783%2Crouteend_time%3A29783%2Crouteend_ptime%3A31773%2Cptime%3A31773%2Ctab_active%3A1%2Crouteend_lv_visible%3A1%2Crouteend_lvh_visible%3A1%22%2C%22prot%22%3A%22http1%22%2C%22speed%22%3A%22unknown%22%2C%22t%22%3A%22pageload%22%2C%22uid%22%3A%2242%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22xray_loadflow_step-20%22%2C%22uid%22%3A%2243%22%7D%2C%7B%22v%22%3A%2297.3999999"
		"9999782%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-api%22%2C%22i%22%3A%22x-threads_status_smart-hit%3A97.39999999999782%2Cx-threads_status_smart-l_50%3A28884%2Cx-threads_status_smart-h_200%3A97.39999999999782%2Cx-threads_status_smart-a_200%3A97.39999999999782%22%2C%22uid%22%3A%2244%22%7D%2C%7B%22v%22%3A%2231774.3248%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-app-ready%22%2C%22i%22%3A%22success%3A31774.3248%2Cscore_fail%3A31774.3248%22%2C%22uid%22%3A%2245%22%7D%2C%7B%22v%22%3A%221%22%"
		"2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22200%3A97%2Cthreads_status_smart_200%3A97%2Cfast_method%3A97%2Cfast_method_timeout_pass%3A97%22%2C%22t%22%3A%22p_API%22%2C%22uid%22%3A%2246%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22count%5C%22%3A15%2C%5C%22priority_count%5C%22%3A0%2C%5C%22unread_count%5C%22%3A14%2C%5C%22priority_unread_count%5C%22%3A0%7D%22%2C%22t%22%3A%22p_threads_status_smart%22%2C%22uid%22%3A%2247%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22"
		"%3A%22false%22%2C%22t%22%3A%22p_threads_status_smart%22%2C%22uid%22%3A%2248%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adv_update-on-action%22%2C%22uid%22%3A%2249%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adv_schedule-autoupdate%22%2C%22uid%22%3A%2250%22%7D%5D", 
		LAST);

	web_add_header("X-Request-Id", 
		"af2dcbd4-e3e3-b414-b57a-93874196a2c2");

	web_submit_data("update", 
		"Action=https://e.mail.ru/api/v1/helpers/update", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=index", "Value=305", ENDITEM, 
		"Name=update", "Value={\"count\":{\"show\":true}}", ENDITEM, 
		"Name=email", "Value=sirotkina2t@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=e0fc8c70b1e963eaee93236cc53462e9:6d457a4563616851195102515a0b5202025602560c0f0450545351080700020f5354040a0d0e0355081654475c6e4206", ENDITEM, 
		LAST);

	web_custom_request("batch_7", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t19.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_letters_adv_try-render_2pane%22%2C%22uid%22%3A%2251%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_letters_adv_render-adv_2pane%22%2C%22uid%22%3A%2252%22%7D%2C%7B%22v%22%3A%2229743%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_load_slow%22%2C%22uid%22%3A%2253%22%7D%2C%7B%22v%22%3A%2229743%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timer_all%22%2C%22uid%22%3A%2254%22%7D%2C%7B%22v%22%3A%226"
		"43%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timer_html%22%2C%22uid%22%3A%2255%22%7D%2C%7B%22v%22%3A%224945%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timer_init_app%22%2C%22uid%22%3A%2256%22%7D%2C%7B%22v%22%3A%2220866%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timer_data%22%2C%22uid%22%3A%2257%22%7D%2C%7B%22v%22%3A%222000%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timer_render%22%2C%22uid%22%3A%2258%22%7D%2C%7B%22v%22%3A%221511%22%2C%22skipdwh%22%3A%22false%22%2C%22t%"
		"22%3A%22p_domTiming_domContentLoadedEvent%22%2C%22uid%22%3A%2259%22%7D%2C%7B%22v%22%3A%222170%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22route_timing%3A2170%2Ctimeout_pass%3A2170%22%2C%22t%22%3A%22p_timing_initial_letters%22%2C%22uid%22%3A%2260%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%221step%3A1%22%2C%22t%22%3A%22renovator_browser_old%22%2C%22uid%22%3A%2261%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%221step%3A1%22%2C%22t%22%3A%22ren"
		"ovator_show%22%2C%22uid%22%3A%2262%22%7D%2C%7B%22v%22%3A%22249%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset_render%22%2C%22uid%22%3A%2263%22%7D%2C%7B%22v%22%3A%221122%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_render%22%2C%22uid%22%3A%2264%22%7D%2C%7B%22v%22%3A%2254%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset_render%22%2C%22uid%22%3A%2265%22%7D%2C%7B%22v%22%3A%2228%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A"
		"%22p_timing_feast_dataset_render%22%2C%22uid%22%3A%2266%22%7D%2C%7B%22v%22%3A%2242%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset_render%22%2C%22uid%22%3A%2267%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_handle_event%22%2C%22uid%22%3A%2268%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_handle_event%22%2C%22uid%22%3A%2269%22%7D%2C%7B%22v%22%3A%221%22%2C%22sk"
		"ipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_handle_event%22%2C%22uid%22%3A%2270%22%7D%2C%7B%22v%22%3A%220%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_handle_event%22%2C%22uid%22%3A%2271%22%7D%2C%7B%22v%22%3A%220%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_handle_event%22%2C%22uid%22%3A%2272%22%7D%2C%7B%22v%22%3A%220%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_handle_eve"
		"nt%22%2C%22uid%22%3A%2273%22%7D%2C%7B%22v%22%3A%220%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_handle_event%22%2C%22uid%22%3A%2274%22%7D%2C%7B%22v%22%3A%22178%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_update%22%2C%22uid%22%3A%2275%22%7D%2C%7B%22v%22%3A%2219769%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_application_update%22%2C%22uid%22%3A%2276%22%7D%2C%7B%22v%22%3A%22371%22%2C%22skipdwh%22%3A%22false%22%2C"
		"%22t%22%3A%22p_timing_feast_dataset-letters_update%22%2C%22uid%22%3A%2277%22%7D%2C%7B%22v%22%3A%22126%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_dataset-letters_update%22%2C%22uid%22%3A%2278%22%7D%2C%7B%22v%22%3A%226270%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_feast_application_mount_all%22%2C%22uid%22%3A%2279%22%7D%2C%7B%22v%22%3A%2270%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_timing_ductus_feast%22%2C%22uid%22%3A%2280%22%7D%2C%7B%22v%22%3A%221%22%2C%22"
		"skipdwh%22%3A%22false%22%2C%22i%22%3A%22threadsOn%3A1%2CponyOff%3A1%2Cl%3A1%2C2pane%3A1%2CthreadsOn2pane%3A1%2Ctheme_default%3A1%2Cfolders-count-total_9%3A1%2Cfolders-count-custom_1%3A1%2Cfolders-count-level-0_6%3A1%2Cfolders-count-level-1_3%3A1%22%2C%22t%22%3A%22p_hit%22%2C%22uid%22%3A%2282%22%7D%5D", 
		LAST);

	web_custom_request("batch_8", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=thirdpty&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t20.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-set_c%22%2C%22uid%22%3A%2281%22%7D%5D", 
		LAST);

	web_custom_request("batch_9", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t21.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22200%3A20077%2Cuser_short_200%3A20077%2Cfast_method%3A20077%2Cfast_method_timeout_fail%3A20077%22%2C%22t%22%3A%22p_API%22%2C%22uid%22%3A%2229%22%7D%5D", 
		LAST);

	web_add_cookie("tmr_reqNum=897; DOMAIN=ad.mail.ru");

	web_add_header("Origin", 
		"https://e.mail.ru");

	web_url("adp_3", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&_=1622200897392&version=octavius&exp_id=244&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&DT_listButtonTextColor=333333&"
		"DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&directLoadErrorCallback=direct81l4z5kvz8tv&ponymode=0&in3paneMetathread=0&email=sirotkina2t%40mail.ru&fid=3879c6f149e0ce833a8e5ab9ec185311&q[]=244983&q[]=474898", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	web_add_cookie("tmr_reqNum=897; DOMAIN=e.mail.ru");

	web_custom_request("batch_10", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=thirdpty&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t23.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-set_c%22%2C%22uid%22%3A%2283%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-check_c_one%22%2C%22uid%22%3A%2284%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-check_c_two%22%2C%22uid%22%3A%2285%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-check_c_one%22%2C%22uid%22%3A%22"
		"90%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-check_c_two%22%2C%22uid%22%3A%2291%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true_true%3A1%22%2C%22t%22%3A%22result%22%2C%22uid%22%3A%2292%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22ok%22%2C%22uid%22%3A%2293%22%7D%5D", 
		LAST);

	web_custom_request("batch_11", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t24.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22hit%3A1675%2Ch_200%3A1675%22%2C%22t%22%3A%22adman-api%22%2C%22uid%22%3A%2286%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22complete%3A1%2Cbr-ie_complete%3A1%2Cs-sidebar_complete%3A1%2Crender%3A1%2Cbr-ie_render%3A1%2Cs-sidebar_render%3A1%2Chas_answer%3A1%2Cbr-ie_has_answer%3A1%2Cs-sidebar_has_answer%3A1%22%2C%22dwh%22%3A%22%7B%5C%22slotId%5C%22%3A%5C%22231758%5C%22%2C%5C%22slotName%5C%22%3A%5C%22sidebar"
		"%5C%22%2C%5C%22expId%5C%22%3A244%2C%5C%22searchuid%5C%22%3A%5C%228335520381534777444%5C%22%7D%22%2C%22t%22%3A%22adman%22%2C%22uid%22%3A%2287%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22hit%3A2330%2Ch_200%3A2330%22%2C%22t%22%3A%22adman-api%22%2C%22uid%22%3A%2288%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22complete%3A1%2Cbr-ie_complete%3A1%2Cs-list2pane_complete%3A1%2Crender%3A1%2Cbr-ie_render%3A1%2Cs-list2pane_render%3A1%2Chas_answer%3A1%2"
		"Cbr-ie_has_answer%3A1%2Cs-list2pane_has_answer%3A1%22%2C%22dwh%22%3A%22%7B%5C%22slotId%5C%22%3A%5C%22216790%5C%22%2C%5C%22slotName%5C%22%3A%5C%22list2pane%5C%22%2C%5C%22expId%5C%22%3A244%2C%5C%22searchuid%5C%22%3A%5C%228335520381534777444%5C%22%7D%22%2C%22t%22%3A%22adman%22%2C%22uid%22%3A%2289%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adman_slot_success%22%2C%22uid%22%3A%2294%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adman_slot_su"
		"ccess%22%2C%22uid%22%3A%2295%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adman_slot_success%22%2C%22uid%22%3A%2296%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adman_slot_success%22%2C%22uid%22%3A%2297%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adman_slot_success%22%2C%22uid%22%3A%2298%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_letters_adv_adman-fetch_success_2pane%22%2C"
		"%22uid%22%3A%2299%22%7D%5D", 
		LAST);

	web_custom_request("batch_12", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t25.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_letters_adv_get-banner_success_2pane%22%2C%22uid%22%3A%22100%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_letters_adv_get-banner_has_2pane%22%2C%22uid%22%3A%22101%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22dropdown%5C%22%3Afalse%2C%5C%22isList%5C%22%3Afalse%7D%22%2C%22t%22%3A%22p_sidebar-menu_cloud_show%22%2C%22uid%22%3A%22102%22%7D%2C%7B%22v%22%3A%221%22%"
		"2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22dropdown%5C%22%3Afalse%2C%5C%22isList%5C%22%3Afalse%7D%22%2C%22t%22%3A%22p_sidebar-menu_contacts_show%22%2C%22uid%22%3A%22103%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22dropdown%5C%22%3Afalse%2C%5C%22isList%5C%22%3Afalse%7D%22%2C%22t%22%3A%22p_sidebar-menu_calendar_show%22%2C%22uid%22%3A%22104%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22draw%3A1%2Cbr-ie_draw%3A1%2Cs-sideb"
		"ar_draw%3A1%2Cb-trg-teaser_draw%3A1%2Cs-sidebar_b-trg-teaser_draw%3A1%2Chid%3A1%2Cbr-ie_hid%3A1%2Cs-sidebar_hid%3A1%2Cb-trg-teaser_hid%3A1%2Cs-sidebar_b-trg-teaser_hid%3A1%2Chid-1%3A1%2Cbr-ie_hid-1%3A1%2Cs-sidebar_hid-1%3A1%2Cb-trg-teaser_hid-1%3A1%2Cs-sidebar_b-trg-teaser_hid-1%3A1%22%2C%22dwh%22%3A%22%7B%5C%22slotId%5C%22%3A%5C%22231758%5C%22%2C%5C%22slotName%5C%22%3A%5C%22sidebar%5C%22%2C%5C%22expId%5C%22%3A244%2C%5C%22bannerId%5C%22%3A%5C%2267757475%5C%22%2C%5C%22bannerSource%5C%22%3A%5C%22tar"
		"get%5C%22%2C%5C%22bannerFormat%5C%22%3A%5C%22teaser%5C%22%2C%5C%22bannerCount%5C%22%3A6%2C%5C%22searchuid%5C%22%3A%5C%228335520381534777444%5C%22%7D%22%2C%22t%22%3A%22adman%22%2C%22uid%22%3A%22105%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22draw%3A1%2Cbr-ie_draw%3A1%2Cs-list2pane_draw%3A1%2Cb-trg-multi_draw%3A1%2Cs-list2pane_b-trg-multi_draw%3A1%2Cvis%3A1%2Cbr-ie_vis%3A1%2Cs-list2pane_vis%3A1%2Cb-trg-multi_vis%3A1%2Cs-list2pane_b-trg-multi_vis%3A1%2Cvis-4%3A1%2Cbr-ie_"
		"vis-4%3A1%2Cs-list2pane_vis-4%3A1%2Cb-trg-multi_vis-4%3A1%2Cs-list2pane_b-trg-multi_vis-4%3A1%22%2C%22dwh%22%3A%22%7B%5C%22slotId%5C%22%3A%5C%22216790%5C%22%2C%5C%22slotName%5C%22%3A%5C%22list2pane%5C%22%2C%5C%22expId%5C%22%3A244%2C%5C%22bannerId%5C%22%3A%5C%2230383351%5C%22%2C%5C%22bannerSource%5C%22%3A%5C%22target%5C%22%2C%5C%22bannerFormat%5C%22%3A%5C%22multi%5C%22%2C%5C%22bannerCount%5C%22%3A1%2C%5C%22searchuid%5C%22%3A%5C%228335520381534777444%5C%22%7D%22%2C%22t%22%3A%22adman%22%2C%22uid%22%3"
		"A%22106%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22b-ie_s-231758_render%3A3035%2Cb-ie_s-231758_timeout%3A3035%2Cb-ie_s-231758_trg%3A3035%2Cb-ie_s-231758_timeout_trg%3A3035%2Cb-ie_s-231758_trg_lo%3A3035%2Cb-ie_s-231758_timeout_trg_lo%3A3035%22%2C%22t%22%3A%22adman-time%22%2C%22uid%22%3A%22107%22%7D%5D", 
		LAST);

	web_custom_request("batch_13", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t26.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22b-ie_s-216790_render%3A2535%2Cb-ie_s-216790_timeout%3A2535%2Cb-ie_s-216790_trg%3A2535%2Cb-ie_s-216790_timeout_trg%3A2535%2Cb-ie_s-216790_trg_lo%3A2535%2Cb-ie_s-216790_timeout_trg_lo%3A2535%22%2C%22t%22%3A%22adman-time%22%2C%22uid%22%3A%22108%22%7D%5D", 
		LAST);

	web_add_header("X-Request-Id", 
		"a025fbad-44c3-5d88-4de0-fb817fa63949");

	web_url("requests", 
		"URL=https://e.mail.ru/api/v1/messages/search/requests?query=&limit=5&email=sirotkina2t%40mail.ru&htmlencoded=false&token=e0fc8c70b1e963eaee93236cc53462e9:6d457a4563616851195102515a0b5202025602560c0f0450545351080700020f5354040a0d0e0355081654475c6e4206&_=1622200899051", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("b=VkkKAKBoCw0AoSibClFWvQupxlgKKZ7FCLkRZAzhSaIIwRZkDMNZpAodNU4LY8zrCwcAAAAhTD9Oc4Tz/+eJUGr1jAAA; DOMAIN=e.mail.ru");

	web_add_cookie("tmr_reqNum=903; DOMAIN=e.mail.ru");

	web_custom_request("batch_14", 
		"URL=https://e.mail.ru/api/v1/utils/xray/batch?p=octavius&email=sirotkina2t%40mail.ru&r=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%2F%3Fback%3D1&pgid=kp88id2v.botj&o_v=390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://e.mail.ru/inbox/?back=1", 
		"Snapshot=t28.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22hit%3A1722%2Ch_200%3A1722%22%2C%22t%22%3A%22adman-api%22%2C%22uid%22%3A%22109%22%7D%2C%7B%22v%22%3A%224148.200000000004%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-api%22%2C%22i%22%3A%22x-helpers_update-hit%3A4148.200000000004%2Cx-helpers_update-l_1%3A173%2Cx-helpers_update-h_200%3A4148.200000000004%2Cx-helpers_update-a_200%3A4148.200000000004%2Cx-helpers_update-s_5s%3A4148.200000000004%22%2C%22uid%22%3A%22110%22%7D%2C%7B%2"
		"2v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22200%3A4148%2Chelpers_update_200%3A4148%2Cfast_method%3A4148%2Cfast_method_timeout_fail%3A4148%22%2C%22t%22%3A%22p_API%22%2C%22uid%22%3A%22111%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adman_slot_success%22%2C%22uid%22%3A%22112%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22p_adman_slot_success%22%2C%22uid%22%3A%22113%22%7D%5D", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"id\":2,\"method\":\"keepalive\",\"params\":{},\"jsonrpc\":\"2.0\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive1*/

	return 0;
}
