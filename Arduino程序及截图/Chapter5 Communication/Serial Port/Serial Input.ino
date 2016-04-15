/*使用串口读取数据,该例可解决乱码问题*/

char ch;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	if (Serial.available() > 0)
	{
		ch = Serial.read();
		Serial.print(ch);
	}
}
