#include<iostream>
using namespace std;
int main()
{
float cen, fah;
cout<<"enter the temp in farenheit:";
cin>>fah;
cen=(fah/1.8-32/1.8);
cout<<"\ntemperature in celsius = "<<cen;
return 0;
}
