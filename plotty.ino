#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(2, 15); // CNS, CE
const byte address[6] = "10001";
int i=0,d=0,c=1;
void setup() {
Serial.begin(115200);
  radio.begin();}
void loop() {
radio.openReadingPipe(0, address);
  radio.setDataRate( RF24_250KBPS );
  radio.setPALevel(RF24_PA_MAX);
  radio.startListening();
  if (radio.available()) {
    radio.read(&i,sizeof(i));
    //Serial.println(i);
     if(i<=500)
{ radio.openWritingPipe(address);
  radio.setDataRate( RF24_250KBPS );
  radio.setPALevel(RF24_PA_MAX);
  radio.stopListening();
  radio.write(&c,sizeof(c));
}
if(i>600)
{ radio.openWritingPipe(address);
  radio.setDataRate( RF24_250KBPS );
  radio.setPALevel(RF24_PA_MAX);
  radio.stopListening();
  radio.write(&d,sizeof(d));
  }

}
}
