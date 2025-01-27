#include<iostream>
using namespace std;
void function();
int main()
{
	function();
	cout<<"The Main Function"<<endl;
	function();
	function();
	
	return 0;
}
void function()
{
	cout<<"Function is being Printed"<<endl;
}
