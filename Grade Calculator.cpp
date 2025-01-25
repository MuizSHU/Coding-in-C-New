#include<iostream>
using namespace std;
int main()
{
	char grade;
	
	cout<<"Enter Your Grade (A,B,C,D,E,F):  ";
	cin>>grade;
	
	
		
	
		switch(grade)
	   { 
		case 'A':
			cout<<"Outstanding";
			break;
			
		case 'B':
			cout<<"Excellent";
			break;
			
		case 'C':
			cout<<"Good";
			break;
			
		case 'D':
			cout<<"Fair";
			break;
			
		case 'E':
			cout<<"Need Improvement";
			break;
		
		case 'F':
			cout<<"Fail";
			break;
			
			default:
		 	cout<<"Invalid Grade";	
		 }
		 


		 
	
	        
	
	return 0;
}