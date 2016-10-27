	BUZZER_Note note;
	
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
	
	return NULL;

