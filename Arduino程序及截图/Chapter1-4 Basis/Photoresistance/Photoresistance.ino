/*使用串口监视器读取读取光敏电阻数值*/

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(analogRead(A0));
	delay(500);
}