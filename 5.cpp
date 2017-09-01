#include<iostream>
using namespace std;
int main()
{
float length, kilometer, meter;
cout<<"enter the length in cenitmetre required for conversion";
cin>>length;
kilometer=length/10000;
meter=length/100;
cout<<"length in kilometer = "<<kilometer<<"\nlength in meter ="<<meter<<"\n";
return 0;
}

