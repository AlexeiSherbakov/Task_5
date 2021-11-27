Action1()
{
		web_reg_save_param_ex(
		"ParamName=ID",
		"LB/IC=\"flightID\" value=\"",
		"RB/IC=\" ",
		"Ordinal=All",
		LAST);
	web_reg_save_param_ex(
		"ParamName=Cost",
		"LB/IC=Total Charge: ",
		"RB/IC= <",
		"Ordinal=All",
		LAST);
	web_reg_save_param_ex(
		"ParamName=Info",
		"LB/IC=Flight Details:</b><BR/>  <center>",
		"RB/IC=.<br>  </center>",
		"Ordinal=All",
		LAST);
	web_reg_save_param_ex(
		"ParamName=NPass",
		"LB/IC=<b>&nbsp;&nbsp;",
		"RB/IC= ",
		"Ordinal=All",
		LAST);
	
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
