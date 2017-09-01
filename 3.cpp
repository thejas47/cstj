#include<iostream>
using namespace std;
int main()
{
	float len, bre, peri, area;
	cout<<"Enter length and breadth of the rectangle :";
	cin>>len>>bre;
	area=len*bre;
	peri=(2*len)+(2*bre);
	cout<<"Area = "<<area<<"\tPerimeter="<<peri;
	return 0;
}
