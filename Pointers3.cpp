#include<iostream>
using namespace std;
int main()
{
	int num1, num2, product;
	int *ptr1, *ptr2;
	
	cout<<"---Multiplication in Pointers---"<<endl;
	cout<<"Enter First Number: ";
	cin>>num1;
	
	cout<<"Enter Second Number: ";
	cin>>num2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	product = *ptr1 * *ptr2;
	
	cout<<"The Product of "<<num1<<" and "<<num2<<" is: "<<product<<endl;
	
	return 0;
}