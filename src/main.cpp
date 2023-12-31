#include <Arduino.h>
#include <M5AtomS3.h>
#include "Wire.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  Wire.begin(38, 39);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}