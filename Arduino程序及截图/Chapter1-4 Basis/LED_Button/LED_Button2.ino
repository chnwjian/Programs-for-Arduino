/*控制板载LED，当按下按键时点亮LED，再次按下按键时熄灭LED*/

const int LED = 13;
const int BUTTON = 2;
boolean ledState = true;			//记录LED状态

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop()
{
	while (digitalRead(BUTTON) == HIGH)
		;								//等待按键按下
	digitalWrite(LED, ledState);
	ledState = !ledState;
	delay(500);
}