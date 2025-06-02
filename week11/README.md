# week11

## 라즈베리파이 & 텔레그램 봇

- opencv2 활용
- [python-telegram-bot](https://github.com/python-telegram-bot/python-telegram-bot) 깃허브 활용

### 작성 파일
- /test.py #cv2확인

- python-telegram-bot/examples/timerbot.py #타이머봇 수정

### 수업 흐름
텔레그램 봇을 생성하고 토큰을 생성한다.

토큰의 형태  ``botID:TOKEN`` 

cv2의 VideoCapture(카메라인덱스)클래스를 활용하여 

이미지를 저장 및 텔레그램 봇으로 전송한다.

미리 만들어진 예제를 활용하여 간단한 코드 수정으로 가능하다.


### cv2.VideoCapture() 메소드 정리
- VideoCapture().``isOpened()`` 카메라가 정상 연결 되었는지 체크하는 메소드, 반환값 : bool타입
- VideoCapture().``read()`` image를 읽어오는 메소드, 반환값 : 에러 체크 변수, 이미지
- VideoCapture().``imshow(출력창 이름, 이미지)`` 이미지 출력메소드
- VideoCapture().``imwrite(저장경로및파일명, 이미지)`` 이미지 저장메소드
 



