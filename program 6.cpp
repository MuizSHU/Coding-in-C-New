#include<iostream>
using namespace std;

void swapValues(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int x  , y ;
	
	cout<<"Enter Value of X: ";
	cin>>x;
	
	cout<<"Enter Value of Y: ";
	cin>>y;
	
	cout<<"Before Swapping: X = "<<x<<", Y = "<<y<<endl;
	swapValues(x,y);
	
	cout<<"After Swapping: X = "<<x<<", Y = "<<y<<endl;
	
	return 0;
}