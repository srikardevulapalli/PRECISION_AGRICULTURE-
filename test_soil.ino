int sp=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensVal=analogRead(sp);
Serial.println(sensVal);
 delay(100);
}
