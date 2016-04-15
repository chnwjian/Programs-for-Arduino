#include <dht.h>
#define DHT11PIN 2

dht DHT11;

void setup()
{
	Serial.begin(9600);
	Serial.println("DHT LIBRARY VERSION: ");
	Serial.println(DHT_LIB_VERSION);
}

void loop()
{
	Serial.println('\n');
	//��ȡ����������
	int chk = DHT11.read11(DHT11PIN);
	Serial.print(chk);
	Serial.print("Read sensor: ");
	//��������Ƿ��������
	switch (chk)
	{
	case DHTLIB_OK:
		Serial.println("OK");
		break;
	case DHTLIB_ERROR_CHECKSUM:
		Serial.println("Checksum error");
		break;
	case DHTLIB_ERROR_TIMEOUT:
		Serial.println("Time out error");
		break;
	default:
		Serial.println("Unknown error");
		break;
	}
	//���ʪ�����¶���Ϣ
	Serial.print("Humidity(%): ");
	Serial.println(DHT11.humidity);
	Serial.print("Temperature(oC): ");
	Serial.println(DHT11.temperature);

	delay(1000);
}