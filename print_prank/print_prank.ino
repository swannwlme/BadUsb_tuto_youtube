#include <Keyboard.h> 

void setup() {
  Keyboard.begin();

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(800);

  Keyboard.print("          , ,\\ ,'\\,'\\ ,'\\ ,\\ ,");

  typeKey(KEY_RETURN);

  Keyboard.print("    ,  ,\\/ \\' `'     `   '  /|");

  typeKey(KEY_RETURN);

  Keyboard.print("    |\\/                      |");

  typeKey(KEY_RETURN);

  Keyboard.print("    :                        |");

  typeKey(KEY_RETURN);

  Keyboard.print("    :                        |");

  typeKey(KEY_RETURN);

  Keyboard.print("     |                       |");

  typeKey(KEY_RETURN);

  Keyboard.print("     |                       |");

  typeKey(KEY_RETURN);

  Keyboard.print("     :               -.     _|");

  typeKey(KEY_RETURN);

  Keyboard.print("     :                \\     `.");

  typeKey(KEY_RETURN);

  Keyboard.print("     |         ________:______\\");

  typeKey(KEY_RETURN);

  Keyboard.print("     :       ,'o       / o    ,");

  typeKey(KEY_RETURN);

  Keyboard.print("     :       \\       ,'-----./");

  typeKey(KEY_RETURN);

  Keyboard.print("      \\_      `--.--'        )");

  typeKey(KEY_RETURN);

  Keyboard.print("     ,` `.              ,---'|");

  typeKey(KEY_RETURN);

  Keyboard.print("     : `                     |");

  typeKey(KEY_RETURN);

  Keyboard.print("      `,-'                   |");

  typeKey(KEY_RETURN);

  Keyboard.print("      /      ,---.          ,'");

  typeKey(KEY_RETURN);

  Keyboard.print("   ,-'            `-,------'");

  typeKey(KEY_RETURN);

  Keyboard.print("   `.        ,--'");

  typeKey(KEY_RETURN);

  Keyboard.print("     `-.____/");

  typeKey(KEY_RETURN);

  Keyboard.print("            \\");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("tu t'ais fais hacké par W1L3X");
  typeKey(KEY_RETURN);
  Keyboard.print("tu t'ais fais hacké par W1L3X");
  typeKey(KEY_RETURN);
  Keyboard.print("tu t'ais fais hacké par W1L3X");
  typeKey(KEY_RETURN);
  Keyboard.print("tu t'ais fais hacké par W1L3X");
  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('p');
  Keyboard.releaseAll();

  delay(800);

  typeKey(KEY_RETURN);
  
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void loop() {}
