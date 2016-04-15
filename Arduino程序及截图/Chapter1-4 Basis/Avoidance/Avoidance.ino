/*****
检测前方是否有物体，如果没有检测到物体，触发蜂鸣器报警
有障碍物时，模块输出低电平；无障碍，模块输出高电平
所用模块为openjumper避障模块
*****/

const int BUZZER = 12;
boolean state=false;

void setup()
{
	Serial.begin(9600);
	pinMode(2, INPUT);
	attachInterrupt(0, Warning, CHANGE);
}

void loop()
{
	//Serial.println(digitalRead(2));
	if (state)
	{
		tone(BUZZER, 1000);
	}
	else
		noTone(BUZZER);
	
}

void Warning()
{
	state =! state;
}