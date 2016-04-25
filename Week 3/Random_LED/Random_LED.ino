int led[] = {10,11,12,13};

void setup() {
int index;
for(index = 0; index <=4; index++) {
  pinMode(led[index], OUTPUT);
  }
}
void loop() {
 int index;
 
 index = random(4);
 
  digitalWrite(led[index], HIGH); 
  delay(1000);                   
  digitalWrite(led[index], LOW);   
 

}
