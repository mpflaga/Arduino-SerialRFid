#include "RFid.h"

Pins ldrPins =
  // {Signal Pin, GND Pin, Threshold}
  // Note - GND = 0 assumes LDR is connected to real ground.
{A6, A7 };

RFid RFid(ldrPins, (int) 10);

void setup() {

  // Initialize both serial ports:
  Serial.begin(500000);
  Serial.println(F("\nStarted MegaRfID reader on RX1"));


  // Turn on RF tag reader listener.
  Serial1.begin(9600);
  RFid.begin(Serial1);
}

void loop() {

  if ( RFid.available() ) {
    Serial.print(F("Detected Card ID = ")); Serial.println(RFid.read());
  }

}
