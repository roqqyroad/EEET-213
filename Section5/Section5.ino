void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100); //100ms delay
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 300; i++) {
    int a0 = analogRead(0); //read Vcc
    float vcc = a0 * 5.0 / 1023.0; //convert to V
    int a1 = analogRead(1); //read Vce
    float vce = a1 * 5.0 / 1023.0; //convert to V
    float ic = 10.0 * (vcc-vce); //mA

    Serial.print ("vcc = ");
    Serial.print (vcc);
    Serial.print (" vce = ");
    Serial.print (vce);
    Serial.print(" ic = ");
    Serial.println(ic); 
  }
  exit (1);
}
