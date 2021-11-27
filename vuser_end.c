vuser_end()
{	
	
	/* Sign off */
	int g;
	g=0;
	do
	{
		
		if(g==atoi(lr_eval_string("{NPass_1}")))
		   {
			lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_1}"));
			lr_output_message("Info:%s",lr_eval_string("{Info_1}"));
			lr_output_message(lr_eval_string("{ID_1}"));
			lr_output_message(lr_eval_string("{Cost_1}"));
		   }
		if(g==atoi(lr_eval_string("{NPass_2}")))
		   {
			lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_2}"));
			lr_output_message("Info:%s",lr_eval_string("{Info_2}"));
			lr_output_message(lr_eval_string("{ID_2}"));
			lr_output_message(lr_eval_string("{Cost_2}"));
		   }
		   
		if(g==atoi(lr_eval_string("{NPass_3}")))
		   {
			lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_3}"));
			lr_output_message("Info:%s",lr_eval_string("{Info_3}"));
			lr_output_message(lr_eval_string("{ID_3}"));
			lr_output_message(lr_eval_string("{Cost_3}"));
		   }
		   
		if(g==atoi(lr_eval_string("{NPass_4}")))
		   {
			lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_4}"));
			lr_output_message("Info:%s",lr_eval_string("{Info_4}"));
			lr_output_message(lr_eval_string("{ID_4}"));
			lr_output_message(lr_eval_string("{Cost_4}"));
		   }
		   
		   if(g==atoi(lr_eval_string("{NPass_5}")))
		   {
		   	lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_5}"));
		   	lr_output_message("Info:%s",lr_eval_string("{Info_5}"));
			lr_output_message(lr_eval_string("{ID_5}"));
			lr_output_message(lr_eval_string("{Cost_5}"));
		   }
		   
		   if(g==atoi(lr_eval_string("{NPass_6}")))
		   {
		   	lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_6}"));
		   	lr_output_message("Info:%s",lr_eval_string("{Info_6}"));
			lr_output_message(lr_eval_string("{ID_6}"));
			lr_output_message(lr_eval_string("{Cost_6}"));
		   }
		   
		   if(g==atoi(lr_eval_string("{NPass_7}")))
		   {
		   	lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_7}"));
		   	lr_output_message("Info:%s",lr_eval_string("{Info_7}"));
			lr_output_message(lr_eval_string("{ID_7}"));
			lr_output_message(lr_eval_string("{Cost_7}"));
		   }
		   
		   if(g==atoi(lr_eval_string("{NPass_8}")))
		   {
		   	lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_8}"));
		   	lr_output_message("Info:%s",lr_eval_string("{Info_8}"));
			lr_output_message(lr_eval_string("{ID_8}"));
			lr_output_message(lr_eval_string("{Cost_8}"));
		   }
		   
		   if(g==atoi(lr_eval_string("{NPass_9}")))
		   {
		   	lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_9}"));
		   	lr_output_message("Info:%s",lr_eval_string("{Info_9}"));
			lr_output_message(lr_eval_string("{ID_9}"));
			lr_output_message(lr_eval_string("{Cost_9}"));
		   }
		   
		   if(g==atoi(lr_eval_string("{NPass_10}")))
		   {
		   	lr_output_message("Number of passangers:%s",lr_eval_string("{NPass_10}"));
		   	lr_output_message("Info:%s",lr_eval_string("{Info_10}"));
			lr_output_message(lr_eval_string("{ID_10}"));
			lr_output_message(lr_eval_string("{Cost_10}"));
		   }
		   
	g++;
	}
	while(g!=atoi(lr_eval_string("{Bigger}")));
	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	
	return 0;
}
