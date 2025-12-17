void setup() {
  // put your setup code here, to run once:

}

void loop() {
 analogWrite(6,0);// put your main code here, to run repeatedly:
delay(1000);
analogWrite(6,64);
delay(1000);
analogWrite(6,128);
delay(1000);
analogWrite(6,192);
delay(1000);
analogWrite(6,255);
delay(1000);
}
