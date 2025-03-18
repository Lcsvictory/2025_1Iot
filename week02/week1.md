내가 다루고 있는 arduino가 무슨 버전인지 체크.

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
    //digitalWrite, digitalRead, analogueWrite 함수는 존재.

    ...
}

```

