#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2000);
  
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(100);
  Keyboard.release(key);
}

void loop() {
  typeKey('z');
  delay(1000);
  typeKey('s');
  delay(1000);

}
