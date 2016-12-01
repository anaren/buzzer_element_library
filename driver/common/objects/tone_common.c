#include "tone.h"
#include "tone_config.h"
#include "../gpio/gpio.h"
#include "../pin_mapping.h"

static bool toneOn;

void TONE_Init()
{
	AIR_PWM_Enable(TONE_PWM_PIN);
	toneOn = true;
	TONE_Stop();
}

void TONE_Start(unsigned int note)
{
	if(!toneOn)
	{
		AIR_PWM_SetDutyCycleAndFrequency(TONE_PWM_PIN, 50, (note/1000));
		toneOn = true;
	}
}

void TONE_Stop()
{
	if(toneOn)
	{
		AIR_PWM_SetDutyCycleAndFrequency(TONE_PWM_PIN, 0, 2000);
		toneOn = false;
	}
}
