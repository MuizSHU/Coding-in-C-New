#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	int choice;
	
	do
	{
		cout<<"===Calculator==="<<endl;
		cout<<"1. Addition"<<endl;
		cout<<"2. Subtraction"<<endl;
		cout<<"3. Multiplication"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter First Number: ";
				cin>>num1;
				
				cout<<"Enter Second Number: ";
				cin>>num2;
				
				cout<<"Result: "<< num1 + num2 <<endl;
				break;
				
			case 2:
				cout<<"Enter First Number: ";
				cin>>num1;
				
				cout<<"Enter Second Number: ";
				cin>>num2;
				break;
				
				cout<<"Result: "<< num1 - num2 <<endl;
				
			case 3:
				cout<<"Enter First Number: ";
				cin>>num1;
				
				cout<<"Enter Second Number: ";
				cin>>num2;
				
				cout<<"Result: "<< num1 * num2 <<endl;
				break;
			case 4:
				cout<<"Enter First Number: ";
				cin>>num1;
				
				cout<<"Enter Second Number: ";
				cin>>num2;
				if( num2!=0 )
				{
					cout<<"Result: "<< num1 / num2 <<endl;
				}
				else
				{
					cout<<"Dividing by zero gives infinity,Means Error."<<endl;
				}
				break;	
		}
	}while( choice!=5 );
	
	return 0;
}