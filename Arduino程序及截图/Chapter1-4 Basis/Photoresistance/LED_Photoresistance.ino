/*使用光敏电阻控制板载LED亮暗*/

const int LED = 13;
int fadeValue;
int lightValue;		//模拟引脚读取光敏电阻值

void setup()
{
	
}

void loop()
{
	lightValue = analogRead(A0)/5;
	analogWrite(LED, lightValue);	
	//理论上analogWrite（pin，value）中，value的取值为0~255
	delay(500);
}