void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial3.begin(115200);
Serial.println("ESP-01 AT Communication");
Serial.println("Type AT command and press enter >>");
delay(1000);
}

void loop()
 {
  //Read respose from ESp01
  while(Serial3.available()>0)
  {
    char data=Serial.read();
    Serial.write(data);
  }
// send AT common to Esp01
 if(Serial.available())
{
  String command =Serial.readStringUntil('\n');
  command.trim();
  if (command.length()>0){

    Serial.print(">>");
    Serial.println(command);
    Serial3.println(command);
  }
}
 }
