#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <ESP8266WiFi.h>
 
const char* ssid     = "sai";   //replace with your own SSID
const char* password = "poiuytrewq";    //replace with your own password
const char* host = "api.pushingbox.com";  

double data;
RF24 radio(2, 15); // CNS, CE
const byte address[6] = "10001";
int i=0,d=0,c=1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
  radio.begin();
  //Serial.println();
  //Serial.println();
  //Serial.print("Connecting to ");
  //Serial.println(ssid);
  
  /* Explicitly set the ESP8266 to be a WiFi-client, otherwise, it by default,
     would try to act as both a client and an access-point and could cause
     network-issues with your other WiFi-devices on your WiFi-network. */
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    //Serial.print(".");
  }
 
  //Serial.println("");
 Serial.println("WiFi connected");  
  //Serial.println("IP address: ");
  //Serial.println(WiFi.localIP());
 
}

void loop() {
  // put your main code here, to run repeatedly:
radio.openReadingPipe(0, address);
  radio.setDataRate( RF24_250KBPS );
  radio.setPALevel(RF24_PA_MAX);
  radio.startListening();
  if (radio.available()) {
    radio.read(&i,sizeof(i));
    data=i;
    Serial.println(i);
     if(i<=500)//&&a==0)
{ radio.openWritingPipe(address);
  radio.setDataRate( RF24_250KBPS );
  radio.setPALevel(RF24_PA_MAX);
  radio.stopListening();
  radio.write(&c,sizeof(c));
  //a=1;
  //Serial.println("Sent");
}
if(i>600)//&&a==1)
{ radio.openWritingPipe(address);
  radio.setDataRate( RF24_250KBPS );
  radio.setPALevel(RF24_PA_MAX);
  radio.stopListening();
  radio.write(&d,sizeof(d));
  //a=0;
 // Serial.println("Sent");
  }
    //Serial.print("connecting to ");
    //Serial.println(host);
  
    // Use WiFiClient class to create TCP connections
    WiFiClient client;
    const int httpPort = 80;
    if (!client.connect(host, httpPort)) {
      //Serial.println("connection failed");
      return;
    }
 
    // We now create a URI for the request
    String url = "/pushingbox?";
    url += "devid=";
    url += "v61EA24DB71DA23C";
    url += "&data="+String(data);
  
   // Serial.print("Requesting URL: ");
   // Serial.println(url);
  
    // This will send the request to the server
    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
    unsigned long timeout = millis();
    while (client.available() == 0) {
      if (millis() - timeout > 5000) {
      //Serial.println(">>> Client Timeout !");
      client.stop();
      return;
    }
  }
  
  // Read all the lines of the reply from server and print them to Serial
  while(client.available()){
    String line = client.readStringUntil('\r');
    //Serial.print(line);
    //Serial.print("Data Sent!");
  }
  
 // Serial.println();
  //Serial.println("closing connection");
    //Serial.print("Recieved=");
    //Serial.println(i);
   
  }
}
