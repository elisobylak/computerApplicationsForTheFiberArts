int ledR1 = 9;
int ledY1 = 11;
int ledG1 = 12;
int ledR2 = 8;
int ledY2 = 10;
int ledG2 = 13;

void setup() {
  pinMode(ledR1, OUTPUT);
  pinMode(ledY1, OUTPUT);
  pinMode(ledG1, OUTPUT);
  pinMode(ledR2, OUTPUT);
  pinMode(ledY2, OUTPUT);
  pinMode(ledG2, OUTPUT);
}

int counter = 0;

void loop() {
  trafficLights();
}


void trafficLights() {
    for(int x = 0; x = 2; x++) {
    if(x % 2 == 0) {
      digitalWrite(ledR1, HIGH);
      digitalWrite(ledY1, LOW);
      digitalWrite(ledG1, LOW);
      
      digitalWrite(ledR2, LOW);
      digitalWrite(ledY2, LOW);
      digitalWrite(ledG2, HIGH);
      delay(3000);
      
      digitalWrite(ledR1, HIGH);
      digitalWrite(ledY1, LOW);
      digitalWrite(ledG1, LOW);
      
      digitalWrite(ledR2, LOW);
      digitalWrite(ledY2, HIGH);
      digitalWrite(ledG2, LOW);
      delay(2000);
      
      digitalWrite(ledR1, LOW);
      digitalWrite(ledY1, LOW);
      digitalWrite(ledG1, HIGH);
      
      digitalWrite(ledR2, HIGH);
      digitalWrite(ledY2, LOW);
      digitalWrite(ledG2, LOW);
      delay(3000);
      
      digitalWrite(ledR1, LOW);
      digitalWrite(ledY1, HIGH);
      digitalWrite(ledG1, LOW);
      
      digitalWrite(ledR2, HIGH);
      digitalWrite(ledY2, LOW);
      digitalWrite(ledG2, LOW);
      delay(2000);
      
      
    }
  }
}
