
	static bool toggle = false;
	
	toggle = !toggle;
	
	if(toggle)
	{
		TONE_Start(%(note)s);
	}
	else
	{
		TONE_Stop();
	}
	
	return NULL;

