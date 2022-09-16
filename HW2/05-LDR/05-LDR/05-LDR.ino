void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int ldr_val=analogRead(A0);
  Serial.println(ldr_val);
  delay(1000);
}
