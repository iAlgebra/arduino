#include <require_cpp11.h>
#include <deprecated.h>
#include <MFRC522Extended.h>
#include <MFRC522.h>

//----Begin Code (copy from here)----

//Variables
int pwmVal = 255; //PWM range is 0 - 255. Change this value and reupload to see the difference!
void setup() {
// put your setup code here, to run once:
  pinMode(6, OUTPUT); //Set the pin we chose above as OUTPUT. This is actually automatic however I included it to give an example of where you might use this feature.
  analogWrite(6, pwmVal); // the 6 is the pin on the Arduino the LED is connected to, pwmVal is the variable containing the value for the PWM duration. analogWrite tells the Arduino this is a PWM pin.
}
void loop() {
}
//----End Code (copy to here)----
