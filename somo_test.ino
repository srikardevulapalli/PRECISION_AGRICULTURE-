int a;
int d=14; 
int b;
void setup() 
{
  Serial.begin(9600);
 pinMode(d, INPUT);
}

void loop() 
{
 a = analogRead(d);
b=1023-a;
Serial.println(a);
}
