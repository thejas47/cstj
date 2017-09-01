#include<iostream>
using namespace std;

int main()
{
	float cen, fah;
	cout<<"Enter temperature in Celsius : ";
	cin>>cen;
	fah=(1.8 * cen) + 32;
	cout<<"\nTemperature in Fahrenheit = "<<fah;
	return 0;
}
