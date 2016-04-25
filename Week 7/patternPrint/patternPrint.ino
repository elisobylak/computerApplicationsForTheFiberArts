 #define ROWS 8
 #define COLS 8
 
 int img[ROWS][COLS];
 
 int led = 13;
  
 void setup() {
  Serial.begin(9600);
  for (int r=0; r<ROWS; r++) {
    for (int c=0; c<COLS; c++) {
       img[r][c] = 0;
    }
 }
 }

  void loop() {
     diamondL();
     diamondR();
     print_img();
     
     //ledTest();
     
  }

  void ledTest() {
    digitalWrite(led, HIGH);
    Serial.print(char('on'));
    delay(1000);
    digitalWrite(led, LOW);
    Serial.print(char('off'));
    delay(1000);
  }


  void diamondL() {
     for (int c=0; c<COLS; c++) {
        img[c][c] = 1;
     }
  }
  
  void diamondR() {
     for (int c=8; c>0; c++) {
        img[c][c] = 2;
     }
  }

  void print_img() {
     for (int r=0; r<ROWS; r++) {
       for (int c=0; c<COLS; c++) {
          Serial.print(img[r][c]);
       }
       Serial.println();
     }
  }
