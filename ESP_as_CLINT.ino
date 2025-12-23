void setup() {
Serial.begin(9600);
Serial3.begin(115200);
Serial.println("AT commands Begin....");  // put your setup code here, to run once:sendtoESP("AT",1000);
sendtoESP("AT+RST",2000);
sendtoESP("AT+CWMODE=1",1000);
sendtoESP("AT+CWJAP=\"GSP-STAFF\",\"55r@G5b#\"",5000);
}

void loop() 
 {
  int a=random(0,100);
  int b=random(0,100);
  sendtoESP("AT+CIFSR",2000);
  sendtoESP("AT+CIPMUX=0",2000);
  sendtoESP("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80",1000);
String url = "GET /update?api_key=ZHDESD7JLSULWCJE&field1=" + String(a) + "&field2=" + String(b) +" HTTP/1.1\r\nHost: api.thingspeak.com\r\nConnection: close\r\n\r\n";;
 // int l=url.length();
  sendtoESP("AT+CIPSEND=120",2000);
  sendtoESP(url,5000);
 
  
  delay(15000);
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