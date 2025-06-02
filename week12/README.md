# week12 미세먼지 데이터를 저장하여 시각화 & 텔레그램 봇에 전송

- 사용한것들
```
influxdb
grafana
arduino uno 3
미세먼지센서
```
## 작업흐름
- 미세먼지 센서를 ``arduino uno 3`` 에 연결하여 PC와 직렬통신(serial)한다.
- 수신받은 데이터를 ``influxdb``에 저장한다.
- ``influxdb``에 저장된 데이터를 ``grafana``에서 시각화 한다.

# influxdb install in **Raspberry PI 3** 

## 라즈베이파이 업데이트
```
  sudo apt update
  sudo apt upgrade
```
## Repository의 GPG key를 더하기

```
wget -qO- https://repos.influxdata.com/influxdb.key | sudo apt-key add -

```

## Repository를 더하기

```
echo "deb https://repos.influxdata.com/debian stretch stable" | sudo tee /etc/apt/sources.list.d/influxdb.list
```

## 프로그램 설치
```
sudo apt update
sudo apt install influxdb
```
## 프로그램 실행 전 설정
```
sudo systemctl unmask influxdb
sudo systemctl enable influxdb
sudo systemctl start influxdb
```

## 데이터베이스 만들기
```
$ influx

>create database <데이터베이스이름>
```
```
확인 : show databases 
```


# grafana install in **Raspberry PI 3**
## Repository의 GPG key를 더하기
```
wget -q -O - https://packages.grafana.com/gpg.key | sudo apt-key add -
```

## Repository를 더하기
```
echo "deb https://packages.grafana.com/oss/deb stable main" | sudo tee -a /etc/apt/sources.list.d/grafana.list
```

## 프로그램 설치
```
sudo apt update
sudo apt install grafana
```

## 프로그램 실행
```
sudo service grafana-server start
```

## tips
- 데이터의 형태에 따라 적절한 파싱이 필요하다.
