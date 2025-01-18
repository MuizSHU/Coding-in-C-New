#include <iostream>
using namespace std;
int main() 
{
    int num;
    int positiveCount = 0, negativeCount = 0;

    cout << "Enter Integers (Enter 0 to Stop):" <<endl;
    while (true) 
	{
        cin >> num;  

        if (num == 0) 
		{
            break;  
        }

        if (num > 0) 
		{
            positiveCount++;  
        } 
		else if (num < 0) 
		{
            negativeCount++;  
        }
    }
    
    cout << "Number of positive integers: " << positiveCount << endl;
    cout << "Number of negative integers: " << negativeCount << endl;

    return 0;
}
