#include<iostream>
using namespace std;
void myName(string name, string city, int age, string country, string university, string majoring)
{
	cout<<"My Name is "<<name<<endl;
	cout<<"My City is "<<city<<endl;
	cout<<"My Age is "<<age<<endl;
	cout<<"My Country is "<<country<<endl;
	cout<<"My University is "<<university<<endl;
	cout<<"My Majoring Subject is "<<majoring<<endl;
}
int main()
{
	string name, city, country, university, majoring;
	int age;
	
	cout<<"Enter Your Name: ";
	cin>>name;
	
	cout<<"Enter your Age: ";
	cin>>age;
	
	cout<<"Enter your City: ";
	cin>>city;
	
	cout<<"Enter your Country: ";
	cin>>country;
	
	cout<<"Enter your University: ";
	cin>>university;
	
	cout<<"Enter your Majoring Subject: ";
	cin>>majoring;
	
	myName( name, city, age, country, university, majoring);

	
	return 0;
}