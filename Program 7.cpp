#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	
	cout<<"Enter a: ";
	cin>>a;
	
	cout<<"Enter b: ";
	cin>>b;
	
	cout<<"Enter c: ";
	cin>>c;
	
	if( a==b && b==c )
	{
		cout<<"This is Equilateral Traingle.";
	}
	else
	{
		if( a!=b && a!=c && b!=c )
		{
			cout<<"This is Scalene Traingle.";
		}
		else
		{
			cout<<"This is Isoceles Traingle.";
		}
	}
	
	return 0;
	
}