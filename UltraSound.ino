const int trigpin=2;
const int echopin=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  PINMODE(echopin,INPUT); 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,OUTPUT);
delay(2000);
digitalWrite(trigpin,HIGH);
delay(10000);
}
