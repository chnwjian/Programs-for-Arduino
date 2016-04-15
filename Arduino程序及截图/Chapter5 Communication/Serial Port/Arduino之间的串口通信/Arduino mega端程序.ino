/*****
Arduino间串口通信
Arduino mega 2560端程序
Serial与计算机通信
Serial1与UNO SoftwareSerial(设备B)通信
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
	//读取并显示从计算机输入的数据，同时发送给UNO(设备B)
	if (Serial.available() > 0)
	{
		if (Serial.peek() != '\n')
		{
			device_A_String += (char)Serial.read();
		}
		else
		{
			Serial.read();	//读出'\n'
			Serial.print("You said: ");
			Serial.println(device_A_String);
			Serial1.println(device_A_String);//将信息发送给UNO
			device_A_String = "";
		}
	}

	//读取并显示从UNO(设备B)传入的数据
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