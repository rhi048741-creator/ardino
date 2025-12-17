void setup() {
Serial.begin(9600);
Serial.println("reading  analog voltage");
  delay(1000);// put your setup code here, to run once:

}

void loop() {
float a,v;
a=analogRead(A14);
Serial.println(a);
v=a*5/1023; 
Serial.print("voltage="); // put your main code here, to run repeatedly:
Serial.println(v);
delay(1000);
}
