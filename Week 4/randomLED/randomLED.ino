int ledPins[] = {8,9,10,11,12,13};

void setup() {
  int index;
  for(index = 0; index <= 6; index++)
  {
    pinMode(ledPins[index],OUTPUT);
  }
}

void loop() {
  randomLED();

}

void randomLED()
{
int index;
int delayTime;

index = random(7);
delayTime = random(100,1000);

digitalWrite(ledPins[index], HIGH);
delay(delayTime);
digitalWrite(ledPins[index], LOW);
}

