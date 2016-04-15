/*使用串口输出数据到计算机*/

int counter = 0;

void setup()
{
	Serial.begin(9600);	//需与串口监视器设置的波特率一致
}

void loop()
{
	counter = counter + 1;
	Serial.print(counter);
	Serial.print(':');
	Serial.println("Hello World!");

	delay(1000);
}