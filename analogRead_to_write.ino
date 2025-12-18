void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
Serial.begin(9600);
}

void loop() {
 float a,b;
 a=analogRead(A14); 
 Serial.println(a);

 b=map(a,0,1023,0,255);
 Serial.println(b);
analogWrite(6,b);
delay(1000);}
