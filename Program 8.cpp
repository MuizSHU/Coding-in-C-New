#include<iostream>
using namespace std;
int main()
{
	float weight, height, bmi;
	
	cout<<"Enter Your Weight: ";
	cin>>weight;
	
	cout<<"Enter Your Height: ";
	cin>>
	
	bmi = weight / height * height;
	
	if( bmi>18.5 )
	{
		cout<<"UnderWeight"<<endl;
	}
	else if( bmi>25 )
	{
		cout<<"OverWeight"<<endl;
	}
	else
	{
		cout<<"NormalWeight"<<endl;
	}
	
	cout<<"Your BMI is: "<<bmi;
	
	return 0;
}