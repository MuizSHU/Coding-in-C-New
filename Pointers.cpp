#include<iostream>
using namespace std;
int main()
{
	int a = 150;
	int *p ;
	p = &a;
	
	cout<<"Value a Holds: "<<a<<endl;
	cout<<"Address of value a is: "<<&a<<endl;
	cout<<"Pointer p Holds Address: "<<p<<endl;
	cout<<"Value of pointer p Address: "<<*p<<endl;
	
	return 0;
}