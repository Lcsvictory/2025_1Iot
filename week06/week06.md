## 빅데이터
- 빅데이터의 속성 3V
    - Volume(규모)
    - Variety(다양성)
    - Velocity(속도)

    ``추가``
    - 신뢰성
    - 가치정확성
    - 휘발성
- 빅데이터 처리 과정
    - 수집
        - 로그수집, 크롤링, 센싱, RSS리더/open API, ETL(extraction transformationm loading)
    - 저장
        - 분산저장, nosql, 병렬RDBS, 네트워크 저장시스템(NAS)
    - 처리
        - 전처리(번역, 시리 등등), 실시간처리(자율주행, cctv인식)
    - 분석
        - 통계분석, 데이터마이닝, 협업필터링(아마존 상품추천), 텍스트마이닝, 오피니언마이닝
    - 표현
        - 시각화


### 빅데이터 분석기술 中
데이터 마이닝 = 데이터에서 특징을 뽑아냄

통계분석 = 가설을 세운후 가설을 입증하기 위한 목적이 대부분



## tinyos 활용 예제

Cygwin 환경

mote사용예제

BlinkAppC.nc
BlinkC.nc
Makefile

``BlinkAppC.nc`` : 선언부, 추상클래스느낌? 나 이런거 쓸거야. 라고 정의해놓는 파일
``BlinkC.nc`` : 실제 구현부





make telosb #(문법체크)

make telosb install.100

make telosb install.노드아이디 적어줌. 여기선 100으로 설정.


