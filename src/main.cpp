#include <Arduino.h>

/**
 * StAuth10184: I Jiawei Zhang, 000730840 certify that this material is my original work.
 * No other person's work has been used without due acknowledgement. 
 */

unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nHello, World!");
  Serial.println("\n\nName: Jiawei Zhang");
  Serial.println("#000730840");
  Serial.print("ChipId: ");
  Serial.println(ESP.getChipId());
  Serial.print("FlashChipId: ");
  Serial.println(ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Time: ");
  myTime = millis();

  Serial.println(myTime); // prints time since program started
  delay(2000);          // wait a second so as not to send massive amounts of data

}