void setup() {
  // put your setup code here, to run once:

}

void loop() 

{int i;
 for(i=0;i<256;i++)
 {
  analogWrite(6,i);
  delay(10);
 }
 delay(1000);
 for(i=255;i>0;i--)
 {
  analogWrite(6,i);
  delay(10);
 }
 delay(1000);
 } // put your main code here, to run repeatedly:


