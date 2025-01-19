#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outFile("example.txt");
	if(!outFile)
	{
		cout<<"Error: Unable to open file for writing." << endl;
		return 1;
	}
	outFile << "Hello, File Handling in C++!"<< endl;
	outFile << "This is a simple example."<< endl;
	outFile.close();
	
	ifstream inFile("example.txt");
	if(!inFile)
	{
		cout<<"Error: Unable to open file for reading."<<endl;
		return 1;
	}
	
	string line ;
	cout<<"Reading from the file: "<<endl;
	while(getline(inFile, line))
	{
		cout<< line << endl;
	}
	inFile.close();
	
	return 0;
}