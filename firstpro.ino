void setup() {
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
      digitalWrite(6, HIGH);
      delay(1000);
      Serial.println("LED ON");
      digitalWrite(6, LOW);
      delay(1000);
      Serial.println("LED OFF");
    }
  
