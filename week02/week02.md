내가 다루고 있는 arduino가 무슨 버전인지 체크.

### 사용하는 디바이스
    arduino uno R3

---

```
void setup()
{
   ...

  Serial.begin(9600); 
  //사용하는 센서에서 지원하는 baud값을 매칭하는게 중요.
  
   ...
}

```

```
void loop() {
    ...

    digitalWrite(TRIG, LOW); 
    //digitalWrite, digitalRead, analogRead 함수는 존재. analog 데이터를 Write, 내보내는건 안됨.(UNO보드 기준)
    

    ...
}

```

high, low 신호에서 반드시 high가 On신호가 아님.
