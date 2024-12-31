int trigger_pin=9;
int echo_pin=10;
void setup()
{
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  long time;
  float measurement;
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_pin, LOW);
  time=pulseIn(echo_pin,HIGH);
  measurement=(time*0.034)/2;
  Serial.print("distance");
  Serial.print(measurement);
  Serial.print("cm");
  delay(1000);
}
