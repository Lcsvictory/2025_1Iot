int red = 7;
int green = 8;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
}