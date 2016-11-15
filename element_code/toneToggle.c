
	static bool toggle = false;
	
	toggle = !toggle;
	
	if(toggle)
	{
		TONE_Start(TONE_Note_AsBf);
	}
	else
	{
		TONE_Stop();
	}
	
	return NULL;

