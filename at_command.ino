void setup() {
 Serial.begin(9600) ;// put your setup code here, to run once:
Serial3.begin(115200);
Serial.println("Esp-01 ATcommunication");
Serial.println("type at command and press enter >>");
delay(1000);
}

void loop() {
 while(Serial3.available()) // put your main code here, to run repeatedly:
{
  char c=Serial3.read();
  Serial.write(c);
}
while(Serial.available())
{
  char r =Serial.read();
  Serial3.write(r);
}
}
