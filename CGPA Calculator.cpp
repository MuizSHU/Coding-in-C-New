#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to calculate CGPA
double calculateCGPA(vector<int> grades, int numberOfSubjects) {
    double totalPoints = 0;

    // Assuming a simple 10-point grading scale
    for (int i = 0; i < numberOfSubjects; i++) {
        totalPoints += grades[i];
    }

    return totalPoints / numberOfSubjects; // Return average
}

int main() {
    int numberOfSubjects;

    // Taking number of subjects as input
    cout << "Enter the number of subjects: ";
    cin >> numberOfSubjects;

    vector<int> grades(numberOfSubjects);
    
    // Taking grades as input
    cout << "Enter the grades for each subject (out of 10):\n";
    for (int i = 0; i < numberOfSubjects; i++) {
        cout << "Grade for subject " << i + 1 << ": ";
        cin >> grades[i];
    }

    // Calculating CGPA
    double cgpa = calculateCGPA(grades, numberOfSubjects);

    // Displaying the CGPA
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
