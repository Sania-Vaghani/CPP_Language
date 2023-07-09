/*WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method*/

#include<iostream>
using namespace std;

class P{
	public:
	float a;
};
class Q:public P{

	public:
		Fehrenheit()
		{
			float b;
			cout<<"Enter Temperature in Celsius : ";
			cin>>a;
			b=(a*9/5)+32;
			cout<<"Temperature in Fahrenhiet : "<<b<<endl;
		}
};
class R:public Q{
	
	public:
		Kelvin()
		{
			float c,b;
			c = 273.5+((b-32.0)*(5.0/9.0));
			cout<<"Temperature in Kelvin : "<<c<<endl;
		}
};
int main()
{
	Q q1;
	R r1;
	q1.Fehrenheit();
	r1.Kelvin();
	return 0;
}
