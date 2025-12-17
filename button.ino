void setup() {
 pinMode(6,OUTPUT); // put your setup code here, to run once:

}
void loop() {
  tone(6,100);
  delay(3000);//delay 4 sec
  noTone(6);
  delay(3000);// put your main code here, to run repeatedly:

}
