int pin=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<=255;i+=5)
    {analogWrite(pin,i);
     delay(20);}
  for(i=255;i>=0;i-=5)
    {analogWrite(pin,i);
     delay(20);}
}
