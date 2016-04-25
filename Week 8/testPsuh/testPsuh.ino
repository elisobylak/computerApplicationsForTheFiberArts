#define ROWS 9
      #define COLS 9
      int img[ROWS][COLS];
      
      void setup() {
      Serial.begin(9600);
      for (int r=0; r<ROWS; r++) {
        for (int c=0; c<COLS; c++) {
           img[r][c] = 0;
        }
      }
      }

      void loop() {
        diamond();
        print_img();
      }

      void diamond() {
         for (int c=0; c<COLS; c++) {
            img[c][c] = 1;
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
    
