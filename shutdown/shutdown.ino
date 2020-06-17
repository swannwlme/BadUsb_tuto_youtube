#include <Keyboard.h>

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("cmd");

  delay(100);

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("shutdown -s -t 00");

  typeKey(KEY_RETURN);

  Keyboard.end();

}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
