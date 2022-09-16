int LEDPin = 13;


void setup() 
{
  Serial.begin(9600);
     
  pinMode(LEDPin, OUTPUT);

  digitalWrite(LEDPin, LOW);
}

void loop() 
{
  if(Serial.available())
  {
    char data = Serial.read();
    if (data == 'E'){
        digitalWrite(LEDPin, HIGH);
    }
    else if (data == 'D'){
        digitalWrite(LEDPin, LOW);
    }
  }
}
