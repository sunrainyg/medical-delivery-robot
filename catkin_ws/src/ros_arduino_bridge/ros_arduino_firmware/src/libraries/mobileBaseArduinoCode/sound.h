#ifndef _SOUND_H_
#define _SOUND_H_

#define  SOUND_PIN      53

#define  BASE_POWEROFF_BEEP  0
#define  BASE_POWERON_BEEP   1

#define MAX_BEEP_FREQ    800
#define MIN_BEEP_FREQ    200

void initSoundPin();
void basePowerOnBeep();
void basePowerOffBeep();

#endif
