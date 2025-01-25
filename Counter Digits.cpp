#include<iostream>
using namespace std;
int main()
{
	int number;
	
	cout<<"Enter Number: ";
	cin>>number;
	
	if( number==0 )
	{
		cout<<"You Entered Zero Numbers: ";
	}
	else 
	{
		if( number<0 ) 
		number = 1 * number;
		
		int counter = 0;
		while( number>0 )
		{
			number /= 10;
			counter++;
		}
		
		cout<<" Number contains "<< counter <<" digits "<<endl;
	}
	return 0;
}