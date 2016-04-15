/*通过串口绘图器显示两条曲线*/

double i = 0;
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	double temp = i*3.1415926 / 10.0;
	Serial.print(sin(temp));
	Serial.print(',');
	Serial.println(cos(temp));
	i += 0.1;
	delay(5);
}