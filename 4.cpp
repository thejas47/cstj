	
#include<iostream>
using namespace std;
int main()
{
	float r, area, circum, diameter;
	cout<<"Enter the radius of the circle :";
	cin>>r;
	area=3.14*r*r;
	circum=2*3.14*r;
        diameter=2*r;
	cout<<"Area of the circle = "<<area<<"\nCircumference of the circle = "<<circum<<"\ndiameter of the circle = "<<diameter<<"\n";
	return 0;
}

