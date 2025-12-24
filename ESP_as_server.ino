void setup() {
 Serial.begin(9600); // put your setup code here, to run once:
 Serial3.begin(115200);
 sendtoESP("AT+RST",2000);
 sendtoESP("AT+CWMODE=1",1000);
 sendtoESP("AT+CWJAP=\"GSP-STAFF\",\"55r@G5b#",5000);
 sendtoESP("AT+CIFSR",2000);


}
void loop() {
  // put your main code here, to run repeatedly:
sendtoESP("AT+CIFSR",2000);
sendtoESP("AT+CIPMUX=1",2000);
sendtoESP("AT+CIPSERVER=1,80",2000);
sendtoESP("AT+CIPSEND=0,26",3000);
sendtoESP("HELLO BHAI LOG MJA MACHO",5000);
sendtoESP("AT+CIPCLOSE=0",1000);
sendtoESP("AT+CIPSERVER=0",3000);
}
void sendtoESP(String cmd,int delaytime)
{
  Serial3.println(cmd);
  delay(delaytime);
  while(Serial3.available())

  {
    Serial.write(Serial3.read());
  }
  
}