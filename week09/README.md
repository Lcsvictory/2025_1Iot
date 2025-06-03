# week09

## 라즈베리파이 설치

1. raspberry Pi imager 설치
2. ``raspberry pi 3``, ``raspberry pi os 32-bit``

```
sudo apt update
sudo apt upgrade
```

  - 한글깨짐
```
sudo apt-get install fonts-unfonts-core -y
sudo apt-get install ibus ibus-hangul -y
sudo reboot
```

초기세팅시 영어로 먼저 부팅하고 한글 설정.


#### ※SD카드 인식 불량시
    microSD카드, 리더기 사용 기준 

    장치 관리자 -> 범용 직렬 버스 컨트롤러
    SD카드를 인식하는지 확인. 
    
    인식이 가능하다면:
        SD카드 드라이버 제거 -> 하드웨어 변경사항 검색 -> 드라이버 재설치됨.
        
        안되면 드라이버 제거 후 SD카드 분리 -> 재삽입 으로 드라이버 재설치 시도.
        
        드라이버 업데이트 시도 -> 로컬에서 목록~~ 선택해서 하다보면 됨.

    인식이 불가능하다면:
        모르겠다.
