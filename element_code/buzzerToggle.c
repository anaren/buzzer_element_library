
	static bool toggle = false;
	
	toggle = !toggle;
	
	if(toggle)
	{
		BUZZER_Start(%(note)s);
	}
	else
	{
		BUZZER_Stop();
	}
	
	return NULL;

