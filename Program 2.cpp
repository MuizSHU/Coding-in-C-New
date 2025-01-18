#include <iostream>
using namespace std;
int main() 
{
    int start, end;
    int product = 1;
    bool oddProductFound = false; 

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Even numbers between " << start << " and " << end << " are: ";
    
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) 
		{
            cout << i << " ";
        } 
		else 
		{
            product *= i;
            oddProductFound = true;
        }
    }

    cout << endl;

    if (oddProductFound) 
	{
        cout << "The Product of all Odd Numbers between " << start << " and " << end << " is: " << product << endl;
    } 
	else 
	{
        cout << "There are no Odd Numbers between " << start << " and " << end << "." << endl;
    }

    return 0;
}
