#include <SimpleTimer.h>
SimpleTimer timerCnt;

unsigned long loopCnt;

void timerCntFunc() {
  Serial.println(loopCnt);
  loopCnt = 0;
}

void setup() {
  Serial.begin(9600);
  Serial.println();

  timerCnt.setInterval(1000, timerCntFunc);
}

void loop() {
  timerCnt.run();
  loopCnt++;
}