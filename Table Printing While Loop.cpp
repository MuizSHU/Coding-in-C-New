#include<iostream>
using namespace std;
int main()
{
	int num, x = 1;
	
	cout<<"----Table Printing----"<<endl;
	cout<<"Enter a Number: ";
	cin>>num;
	
	while( x<=10 )
	{
		cout<< num <<" * "<< x <<" = "<<num*x<<endl;
		x++;
	}
	return 0;
}