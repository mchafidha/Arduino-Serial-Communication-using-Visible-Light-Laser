#include <SoftwareSerial.h>
#define rx 0
#define tx 1
SoftwareSerial XSERIAL =  SoftwareSerial(rx, tx, false);
void setup()  
{
   XSERIAL.begin(1200);
   Serial.begin(1200);
   Serial.println("Menunggu Pesan..");
}
void loop() 
{
  if (XSERIAL.available())
  {
      Serial.print((char)XSERIAL.read());
  }
}
