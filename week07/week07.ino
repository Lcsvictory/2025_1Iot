void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  static unsigned long loopCnt = 0;
  static unsigned long nextMil = millis() + 1000;

  loopCnt++;
  // Serial.println(millis());

  if (millis() > nextMil) {
    nextMil = millis() + 1000;
    Serial.println(loopCnt);
    loopCnt = 0;
    //1초에 대략 280,000번 호출됨. loop함수는.
  }
}
