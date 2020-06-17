#include <Mouse.h>

// Init function
void setup() {
  delay(800);
  Mouse.begin();

}

void loop() {
  
  int xvar = random(-1000, 1000);
  int yvar = random(-1000, 1000);
  Mouse.move(xvar, yvar);
  delay(20);
  
}
