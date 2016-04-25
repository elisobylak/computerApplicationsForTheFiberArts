#define ROWS 8
#define COLS 8

int img[ROWS][COLS];
int count = 0;
      
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
  delay(200);
  print_img();
 }

      void diamondL() {
         for (int c=0; c<COLS; c++) {
            img[c][c] = 1;
         }
         //for (int c = 8; c > 0; c--) {
            //img[c][c] = 2;
         //}
      }
      
    void print_img() {
         for (int r=0; r<ROWS; r++) {
           for (int c=0; c<COLS; c++) {
              Serial.print(img[r][c]);
              Serial.print(img[r-1][c-1]);
           }
           Serial.println();
         }
         for (int r=8; r>0; r--) {
           for (int c=0; c<COLS; c++) {
             Serial.print(img[r][c]);
           }
           Serial.println();
         }
      }
      

