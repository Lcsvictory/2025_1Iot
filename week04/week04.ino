#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); //0x27 == lcd주소

int TRIG = 13;
int ECHO = 12;
byte smile[8] = { //smile byte code (1인곳만 불이 들어오는 구조.)
  B00000,
  B00000,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};

void setup() {
  // Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  lcd.init();
  lcd.backlight();
  lcd.print("LCD init");
  delay(200);
  lcd.clear();

  lcd.createChar(0, smile);
}

void loop() {
  

  long duration, distance;
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);
  distance = duration / 58.2;
  lcd.setCursor(0,0); // 열0~15, 행0~1
  lcd.print(distance);
  lcd.printstr(" Cm");

  // lcd.blink(); 커서 깜빡임.
  // lcd.autoscroll();
  lcd.setCursor(2,1);
  lcd.print("by Lcsvictory");

  lcd.setCursor(15, 0);
  lcd.write(byte(0));
  delay(500);

  lcd.clear();
  
}
