int LDRValue = 0;
int LDRPort = A0;
int LEDPort = 9;
void setup()
{
  pinMode(LDRPort, INPUT);
  pinMode(LEDPort, OUTPUT);
}

void loop()
{
  LDRValue = analogRead(LDRPort);
  analogWrite(LEDPort,map(LDRValue, 0, 1023, 255, 0));
  delay(100);
}
