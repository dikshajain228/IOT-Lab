int ldr=A0;
int ledpin=13;
void setup() {
 pinMode(ledpin,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  int value=analogRead(ldr);
  Serial.print(value);
  int threshold=500;
  if(value<threshold)
    digitalWrite(ledpin,HIGH);
  else
    digitalWrite(ledpin,LOW);  

}
