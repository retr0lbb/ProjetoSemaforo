void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(12, LOW);
}

