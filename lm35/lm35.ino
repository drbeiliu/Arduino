const static uint8_t inPin = A4;
const int VDD = 3.3;

void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);   // Using 9600 Boundrate for communication
}

void loop() {
  // put your main code here, to run repeatedly
  int n = analogRead(inPin);
  
  float vol = n*(VDD/1023.0*100.0);
  
  Serial.print("Temperature= ");
  Serial.print(vol);
  Serial.println(" C");
  delay(2000);
}
