#include <iostream>
using namespace std;
int main() 
{
    int n, sum = 0, i = 1;

    cout << "Enter a Positive Integer : ";
    cin >> n;

    cout << "The series is: ";
    while (i <= n) 
	{
        cout << i * i;   
        if (i < n) 
		{
            cout << " + "; 
        }
        sum += i * i;  
        i++;            
    }

    cout<<endl<<"The Sum of the Series is: "<<sum<<endl;
    

    return 0;
}
