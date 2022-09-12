#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#define soil 14
#define relay 2
RF24 radio(7, 8); // CNS, CE
const byte address[6] = "10001";
int i=0,a=0,j=0,k=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  radio.begin();
  pinMode(soil,INPUT);
  pinMode(relay,OUTPUT);
 }

void loop() {
  // put your main code here, to run repeatedly:
if(k==10)
{j=analogRead(soil);
radio.openWritingPipe(address);
  radio.setDataRate( RF24_250KBPS );
  radio.setPALevel(RF24_PA_MAX);
  radio.stopListening();
  radio.write(&j,sizeof(j));
  Serial.println(j);
  //delay(500);
  j++;
  k=0;}
  k++;
if(j<=200&&a==1)
{digitalWrite(relay,HIGH);
a=0;
}
if(j>=200&&a==0)
{digitalWrite(relay,LOW);
  a=1;
  }
  }

