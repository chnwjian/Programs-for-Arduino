/*****
Arduino�䴮��ͨ��
Arduino mega 2560�˳���
Serial������ͨ��
Serial1��UNO SoftwareSerial(�豸B)ͨ��
*****/

#include <SoftwareSerial.h>
String device_A_String = "";
String device_B_String = "";

void setup()
{
	Serial.begin(9600);
	Serial1.begin(9600);
}

void loop()
{
	//��ȡ����ʾ�Ӽ������������ݣ�ͬʱ���͸�UNO(�豸B)
	if (Serial.available() > 0)
	{
		if (Serial.peek() != '\n')
		{
			device_A_String += (char)Serial.read();
		}
		else
		{
			Serial.read();	//����'\n'
			Serial.print("You said: ");
			Serial.println(device_A_String);
			Serial1.println(device_A_String);//����Ϣ���͸�UNO
			device_A_String = "";
		}
	}

	//��ȡ����ʾ��UNO(�豸B)���������
	if (Serial1.available() > 0)
	{
		if (Serial1.peek() != '\n')
		{
			device_B_String += (char)Serial1.read();
		}
		else
		{
			Serial1.read();
			Serial.print("Device B said: ");
			Serial.println(device_B_String);
			device_B_String = "";
		}
	}
}