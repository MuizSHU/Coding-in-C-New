#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int num1,num2;
	
	cout<<"Enter the First Number: ";
	cin>>num1;
	
	cout<<"Enter the Second Number: ";
	cin>>num2;
	
	cout<<"The Sum of "<< num1 << " and " << num2 << " is " << num1 + num2 ;
	
	ofstream outFile("calculation_results.txt",ios::app);
	if(!outFile)
	{
		cout<<"Error: Unable to open file for saving results."<<endl;
		return 1;
	}
	outFile << "The Sum of " << num1 << " and "<< num2 << " is: "<< num1 + num2;
	outFile.close();
	
	cout<<" Result saved to 'calculation_results.txt'."<<endl;
	
	return 0;
}