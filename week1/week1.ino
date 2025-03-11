//define으로도 정의 가능함
//#define TRIG 13 //트리거신호
//#define ECHO 12 //받는신호

int red = 7;
int green = 8;
int TRIG = 13;
int ECHO = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  
}

void loop()
{
  long duration, distance;
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);
  distance = duration / 58.2;
  
  if (distance >= 100) {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
  }
  else {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }
  
  Serial.print(distance);
  Serial.println(" Cm");
  delay(300);
}