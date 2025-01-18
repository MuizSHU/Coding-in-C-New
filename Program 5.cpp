#include <iostream>
using namespace std;
int main() 
{
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    int i = n;

    do {
        int j = i;
        
        do {
            cout << j << " ";  
            j++;
        } while (j <= n); 

        cout << endl;  
        i--;  
    } while (i >= 1);  

    return 0;
}
