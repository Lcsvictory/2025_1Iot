import serial
from influxdb_client import InfluxDBClient
import time

serial_port = 'COM2'
baud_rate = 9600
timeout = 2

# influxDB V2 기본설정 (연결)
influxdb_url = "http://localhost:8086"
influxdb_token = "2UlvrsSFdoDkcR6nCRQ3JPE-LXhhRfDdz7RfgtSfcdl-XuKM_l2SseNe2kPZD6vRi17hQ2CD6cQRjwkeQ3gu_A=="
influxdb_org = "test"
influxdb_bucket = "dust"

#influxDB 클라이언트 초기화
client = InfluxDBClient(url=influxdb_url, token=influxdb_token, org=influxdb_org)
write_api=client.write_api()

#시리얼 포트 열기
try:
    ser = serial.Serial(serial_port, baud_rate, timeout = timeout)
    print(f"Connected to {serial_port} at {baud_rate} baud")
except:
    print("연결 실패. Failed to connect to serial port")
    exit()

try:
    while True:
        if ser.in_waiting > 0:
            # 아두이노로부터 시리얼 데이터를 읽어온다.
            line = ser.readline().decode('UTF-8').strip()

            # 데이터가 유효한 데이터면 DB에 기록함.
            if "=" in line:
                key, value = line.split("=")
                try:
                    value = float(value)
                    data=f"sensor_data,device=arduino {key}={value}"
                    write_api.write(bucket=influxdb_bucket, record=data)
                    print(f"Data written to influxDB: {key}={value}")
                except ValueError:
                    print("Invalid data format(유효하지 않은 데이터 포맷입니다.)")
            time.sleep(1)
except Exception as e:
    print(e)
except KeyboardInterrupt:
    print("프로그램이 종료되었습니다.")
finally:
    ser.close()
