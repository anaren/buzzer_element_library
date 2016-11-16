#include "tone.h"
#include "tone_config.h"
#include "../gpio/gpio.h"
#include "../pin_mapping.h"

void TONE_Init()
{
	AIR_PWM_Enable(TONE_PWM_PIN);
}

void TONE_Start(unsigned int note)
{
	AIR_PWM_SetDutyCycleAndFrequency(TONE_PWM_PIN, 50, (note/1000));
}

void TONE_Stop()
{
	AIR_PWM_SetDutyCycleAndFrequency(TONE_PWM_PIN, 0, 2000);
}
