int pin=13;
int button =2;
int buttonState=0;
int count=0;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
pinMode(button,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(button);
if(buttonState==HIGH){
digitalWrite(pin,HIGH);
count++;
delay(1000);
Serial.print(count);}
else 
digitalWrite(pin,LOW);
}
