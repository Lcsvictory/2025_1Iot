
## Iot 개요

Iot가 발전(확산)되기 어려운 이유
- 센서간 통신 프로토콜이 다름
- 데이터의 보안을 유지해야함


근거리 무선통신기술 = 협대역 = WPAN

3GPP = 3세대 통신 프로토콜을 만드는 기구

6loWPAN = IPv6의 저전력버전

Iot3대주요기술
- 센싱
- 유무선통신 및 네트워크 인프라
- 서비스 인터페이스

## Arduino 문법

C++을 베이스로 하는 문법

int 타입이 arduino 종류에 따라 크기가 다름.
arduino UNO = int 2byte

String 은 클래스로 arudino에서만 존재하는 클래스.

arduino UNO 는 직렬 비동기 방식으로 통신(Serial)


``#define vs const``

|#define | const|
|---|---|
컴파일 전에 값으로 변환됨. 타입 에러 못잡음.|컴파일 시에 값으로 변환됨. 타입 에러 잡아냄.

HIGH = 1
LOW = 0

``unsigned 1byte types(0~255)``
- byte == uchar == uint8_t

\0 = null 문자 = 숫자 0

배열은 생성된 후 새로운 배열을 할당할 수 없다.
그에반해 포인터는 새로운 배열을 할당할 수 있다.






