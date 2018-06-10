#include <require_cpp11.h>
#include <deprecated.h>
#include <MFRC522Extended.h>
#include <MFRC522.h>

#include <HID.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Serial connection established...\n\nPlease enter text above and press send.\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  String temp = Serial.readString(); /*This is a LOCAL variable, it will store any text we send TO
the Arduino FROM the PC.*/
  if (temp != NULL) { //If the variable is NOT empty run the next instructions
    Serial.print("You sent the string: "); //Print the string
    Serial.print(temp); //then print the text we sent to the Arduino
    Serial.println("."); //Finally print a fullstop. This is data FROM the Arduino TO the PC.
  }
  /*If there is no text entered, the Arduino will continue processing from here...But as there are no
  further instructions, it will return to the top and start again. If you were to put something here
  such as a Serial.print() command, it would fire constantly until you provide a string of text. Feel
  free to try it!*/
}
