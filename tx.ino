#include <SoftwareSerial.h>
#define rx 0  
#define tx 1  
SoftwareSerial XSERIAL =  SoftwareSerial(rx, tx);
void setup()  

     XSERIAL.begin(1200);
}
void loop() 
{ 
    XSERIAL.println("a");
    delay(1000);
    //XSERIAL.println("Success :) \n ");  
    //delay(2000);
}
