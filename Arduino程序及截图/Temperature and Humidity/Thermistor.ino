#include <math.h>
#define Rt 100000	//热敏电阻在常温下标称阻值
#define Rx 10000	//电路中串联电阻阻值
#define B 3950.00
void setup()
{

	Serial.begin(9600);

}
void loop()
{

	Serial.println(temperature(0));
	delay(1000);

}
double temperature(int analogPin)
{
	//热敏电阻两端电压
	double Un = (float)analogRead(analogPin) / 1023 * 5.00;
	//热敏电阻阻值（标称电阻Rt），电源电压5v
	double Rn = (Rx * Un) / (5.00 - Un);
	//室温T=298.15K,测得温度Tn
	double Tn = 1.00 / (1.00 / 298.15 + (log(Rn / Rt)) / B);

	return Tn - 273.15;
}