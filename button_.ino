int led=0;
void setup() {
  Serial.begin(9600);
pinMode(6,OUTPUT);  // put your setup code here, to run once:
pinMode(12,INPUT_PULLUP);

}

void loop() {
  int button_status;
  button_status=digitalRead(12);
  Serial.print("Button_status :");
  Serial.println(button_status);
  if(button_status==0)
  {
    led=~led;
  digitalWrite(6,led);
  }
  delay(100);
}
