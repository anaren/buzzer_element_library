#include "tone.h"
#include "tone_config.h"
#include "../gpio/gpio.h"

void TONE_Init()
{
	AIR_PWM_Enable(TONE_PWM_PIN);
}

void TONE_Start(unsigned int note)
{
	AIR_PWM_SetDutyCyclePWMFreq(TONE_PWM_PIN, 50.0, (note/1000));
}

void TONE_Stop()
{
	AIR_PWM_SetDutyCyclePWMFreq(TONE_PWM_PIN, 0.0, 2000);
}
