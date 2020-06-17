#include <Keyboard.h> 

void setup() {
  Keyboard.begin();

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(100);

  int i = 0;

  while (i < 50) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('n');
    Keyboard.releaseAll();

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    i++;
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
