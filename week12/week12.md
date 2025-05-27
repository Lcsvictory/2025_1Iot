# week12

- 사용한것들
```
influxdb
grafana
arduino uno 3
미세먼지센서
```


# influxdb install in **Raspberry PI 3** 

## 0. 라즈베이파이 업데이트
```
  sudo apt update
  sudo apt upgrade
```
## 1. Repository의 GPG key를 더하기

```
wget -qO- https://repos.influxdata.com/influxdb.key | sudo apt-key add -

```

## 2. Repository를 더하기

```
echo "deb https://repos.influxdata.com/debian stretch stable" | sudo tee /etc/apt/sources.list.d/influxdb.list
```

## 3. 프로그램 설치
```
sudo apt update
sudo apt install influxdb
```
## 3.1 프로그램 실행 전 설정
```
sudo systemctl unmask influxdb
sudo systemctl enable influxdb
sudo systemctl start influxdb
```

## 4. 데이터베이스 만들기
```
$ influx

>create database <데이터베이스이름>
```
```
확인 : show databases 
```


# grafana install in **Raspberry PI 3**
#### 설치
    sudo apt install grafana

## tips
- 데이터의 형태에 따라 적절한 파싱이 필요하다.
