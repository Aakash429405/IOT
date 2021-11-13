int outputpin=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int rawvoltage=analogRead(outputpin);
float millivolts=(rawvoltage/1024.0)*5000;
float celcius=millivolts/10;
Serial.print(celcius);
Serial.print("degree Celsius,");
Serial.print((celcius*9)/5+32);
Serial.println("Degrees Fahrenheit");
delay(1000);
}
