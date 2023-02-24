void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100); //100ms delay
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("A0 = ");
  delay(100);
  unsigned int vin0 = analogRead(0);
  delay(100);
  Serial.println(vin0);
  delay(200);
  exit(1);
}
