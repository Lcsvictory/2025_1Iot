int red = 7;
int green = 8;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 3; i++) {
  	digitalWrite(red, HIGH);
  	delay(200); // Wait for 1000 millisecond(s)
  
  	digitalWrite(red, LOW);
  	delay(100); // Wait for 1000 millisecond(s)
  }
  delay(200);
  for(int i = 0; i < 3; i++) {
  	digitalWrite(green, HIGH);
  	delay(300); // Wait for 1000 millisecond(s)
  
  	digitalWrite(green, LOW);
  	delay(200); // Wait for 1000 millisecond(s)
  }
  
  for(int i = 0; i < 3; i++) {
  	digitalWrite(red, HIGH);
  	delay(200); // Wait for 1000 millisecond(s)
  
  	digitalWrite(red, LOW);
  	delay(100); // Wait for 1000 millisecond(s)
  }
  delay(1000);
}