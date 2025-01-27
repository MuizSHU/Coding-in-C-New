#include<iostream>
using namespace std;
int main()
{
	int num1, num2, sum;
	int *ptr1, *ptr2;
	
	cout<<"---Subtraction in Pointers---"<<endl;
	cout<<"Enter First Number: ";
	cin>>num1;
	
	cout<<"Enter Second Number: ";
	cin>>num2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	sum = *ptr1 - *ptr2;
	
	cout<<"The Sub of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;
	
	return 0;
}