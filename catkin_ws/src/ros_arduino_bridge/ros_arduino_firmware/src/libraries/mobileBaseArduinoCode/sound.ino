
void initSoundPin()
{
  pinMode(SOUND_PIN, OUTPUT);
}

void basePowerOnBeep()
{
  for (int i = MIN_BEEP_FREQ; i <= MAX_BEEP_FREQ; i++)
  {
    tone(SOUND_PIN, i);
    delay(2);
  }
  noTone(SOUND_PIN);
}

void basePowerOffBeep()
{
  for (int i = MAX_BEEP_FREQ; i >= MIN_BEEP_FREQ; i--)
  {
    tone(SOUND_PIN, i);
    delay(2);
  }
  noTone(SOUND_PIN);
}

/*
    when input error cmd will beep
*/
void errorInputBeep()
{
  tone(SOUND_PIN, MAX_BEEP_FREQ);
  delay(150);
  noTone(SOUND_PIN);
}

