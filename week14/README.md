# week14 wifi zigbee

## wifi
- IEEE 표준 : 802.11
- 구성
    - ``AP`` : 유무선 공유기
    - ``STA``(Station) : 기기 ex) 노트북, 스마트폰...
- Service Set
    - ``BSS``(Basic Service Set)
        - AP와 STA로 구성된 집합의 명칭
        - BSS-ID : BSS에 구성된 AP의 MAC address
        - AP 거치지 않고 통신 -> ad hoc (1대1통신, 디바이스 설정할때)
        - AP 통해서 통신-> infrastructure
    - ``ESS``(Extended Service Set)
        - 두개 이상의 BSS로 구성
- MAC
    - ``PCF``(Point coordination function)
        - 중앙집중식 Polling 방식 사용

    - ``DCF``(Distributed coordination function)
        - CSMA/CA, station에서 사용
- CSMA/CA(CD)
    - ``CS``(Carrier Sense) : 네트워크가 현재 사용중인지 확인
    - ``MA``(Multiple Access) : 네트워크가 비어있다면 누구나 사용가능
    - ``CA``(Collision Avoidance) : 충돌 회피
        - RTS(Request To Send) : 전송해도 되겠니?
        - CTS(Clear To Send) : 전송해도 돼.
    - ``CD``(Collision Detection) : 충돌 감지(유선)
    - Hidden Terminal Problem
## zigbee
- IEE 표준 : 802.15.4
- 구성
    - 3개의 밴드 27개의 채널
- DSSS(Direct Sequence Spread Spectrum)
- MAC 계층
    - NC(Network Coordinator)
    - FFD(Full Function Device) : 전기능기기
    - RFD(Reduced Function Device) : 축소기능기기
    - Beacon 통신 : Slotted CSMA-CA 통신, 슈퍼프레임
    - Non-Beacon 통신 Non-Slotted SMA-CA 통신, 수신 확인 응답
- 슈퍼프레임
    - 최대 16개의 슬롯으로 구성됨
    - 항상 비콘으로 시작됨
    - Beacon : NC(Network Coordinator)가 송신.
    - CFP : 경쟁이 없는 구간, 반드시 받아야 할 데이터가 위치해있음. 0~7개슬롯 할당가능능
    - CAP : 경쟁이 있는 구간, 그나마 덜 중요한 데이터가 위치치해있음.