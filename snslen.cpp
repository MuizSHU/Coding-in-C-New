#include<iostream>
using namespace std;
int main()
{
	int num1 , num2;
	try 
	{
		cout<<"Enter First Number: ";
	    if(!(cin>>num1))
	    {
	    	throw "Input is not Integer!";
		}
	
	    cout<<"Enter Second Number: ";
	    if(!(cin>>num2))
	    {
	    	throw "Input is not Integer!";
		}
		int sum = num1 + num2;
	cout<<" The Sum of "<< num1 <<" and "<< num2 <<" is " << num1 + num2;
	    
	}
	catch (const char* abc)
	{
		
		cout<<"Exception: "<< abc <<endl;
		
	}
	 
	
	
	
	return 0;
	
}