#define ROWS 20
#define COLS 20

int img[ROWS][COLS];
int count = 0;

void setup() {
  Serial.begin(9600);
  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
      img[r][c] = 0;
    }
  }
}

void loop() {
  //diamondL();
  diamondR();
  //delay(200);
  //print_img();
  print_imgL();
}

void diamondL() {
  for (int c = 0; c < COLS; c++) {
    img[c][c] = 1;
  }
  //for (int b = 0; b<COLS; b++) {
  //img[b][b] = 2;
  //}
}

void diamondR() {
  for (int c = (COLS - 1); c >= 0; c--) {
    img[c][c] = 1;
  }
  //for (int b = 0; b<COLS; b++) {
  //img[b][b] = 2;
  //}
}

void print_imgL() {
  if (count == 0) {
    for (int r = (ROWS - 1); r > 0; r--) {
      for (int c = 0; c < COLS; c++) {
        Serial.print(img[r][c]);
      }
      Serial.println();
    }
  }
  count++;
  if (count == 1) {
    for (int r = 0; r < ROWS; r++) {
      for (int c = 0; c < COLS; c++) {
        Serial.print(img[r][c]);
      }
      Serial.println();
    }
  }
  count = 0;
}
void print_img() {
  for (int r = 0; r < ROWS; r++) {
    for (int c = 7; c >= 0; c--) {
      Serial.print(img[r][c]);
    }
    Serial.println();
  }
}

