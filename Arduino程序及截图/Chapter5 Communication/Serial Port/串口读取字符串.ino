/*串口输入字符串*/

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	String instring = "";
	while (Serial.available() > 0)
	{
		instring += (char)Serial.read();
		//适当延时，确保数据写入缓冲区
		delay(10);
	}
	if(instring!="")
	{
		Serial.print("The string is ");
		Serial.println(instring);
	}
}