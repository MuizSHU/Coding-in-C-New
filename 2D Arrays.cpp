#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 2D array
    int rows = 3, cols = 4;
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Loop through rows
    cout << "The 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        // Loop through columns
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";  // Print each element
        }
        cout << endl;  // Newline after each row
    }

    return 0;
}
