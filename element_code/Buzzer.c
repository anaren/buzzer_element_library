	BUZZER_Note note;
	
	if(data != NULL && length > 0)
	{
		if(data[0] == '1' || data[0] == 't')
		{
			BUZZER_Start(note);
		}
		
		else if(data[0] == '0' || data[0] == 'f')
		{
			BUZZER_Stop();
		}
	}
	
	else
	{
		static bool toggle = false;
		
		toggle = !toggle;
		
		if(toggle)
		{
			BUZZER_Start(note);
		}
		
		else
		{
			BUZZER_Stop();
		}
	}
	
	return NULL;

