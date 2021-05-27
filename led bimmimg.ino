
int SensorValue = 0;
int ledDimmimg = 0;
int pwmPin = 9;

void setup()
{
   pinMode(A0, INPUT);
 
   Serial.begin(9600);
   pinMode(pwmPin, OUTPUT);
}

void loop()
{
  SensorValue = analogRead(A0);
  Serial.print("PhotoRegister read = ");
  Serial.println(SensorValue);
  ledDimmimg = map(SensorValue,700,930,0,255);
  if(ledDimmimg < 0) ledDimmimg = 0;
  analogWrite(pwmPin,ledDimmimg);
  delay(100);
}

