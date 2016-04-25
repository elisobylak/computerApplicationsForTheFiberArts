void setup() {                
  // initialize the digital pins as an output.
  pinMode(6, OUTPUT);
// Turn the Serial Protocol ON
  Serial.begin(9600);
}

void loop() {
  mouseY();
  //mouseX();
}

void mouseX(){
   byte byteRead;
   int new_i;

   /*  check if data has been sent from the computer: */
  if (Serial.available()) {
  
    /* read the most recent byte */
    byteRead = Serial.read();
    //You have to subtract '0' from the read Byte to convert from text to a number.
    byteRead=byteRead-'0';
    
    //Turn off all LEDS
    for(int i=2; i<11; i++){
      digitalWrite(i, LOW);
    }
    
    for(int i = 0; i<(byteRead+1); i++){
      if(byteRead >= 11){
        new_i =(int)map(i,0,10,1,255);
        digitalWrite(6,HIGH);
        delay(new_i);
        digitalWrite(6,LOW);
      }else if(byteRead <= 10)
      {
        new_i =(int)map(i,0,10,1,255);
        analogWrite(6,new_i);
      }
      
    }     
  }
}


void mouseY(){
   byte byteRead;
   int new_i;

   /*  check if data has been sent from the computer: */
  if (Serial.available()) {
  
    /* read the most recent byte */
    byteRead = Serial.read();
    //You have to subtract '0' from the read Byte to convert from text to a number.
    byteRead=byteRead-'0';
    
    //Turn off all LEDS
    for(int i=2; i<11; i++){
      digitalWrite(i, LOW);
    }
    
    for(int i = 0; i<(byteRead+1); i++){
      //if(byteRead == i){
        new_i =(int)map(i,0,10,1,255);
        analogWrite(6,new_i);
      //}
    }     
  }
}
