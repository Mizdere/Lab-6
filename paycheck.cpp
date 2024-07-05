// This program will prompt the user to enter a number of grades
// The program will take the average and output the letter grade


// Last Modified Date: 4/17/2024

#include <iostream>
#include <iomanip>
using namespace std;

void calculateAverage(int sum, int count, double& avg);
char determineLetterGrade(double average);

int main() {
    int numberOfGrades, grade, sum = 0;
    double average;
    char letterGrade;

    cout << "Enter the number of grades" << endl;
    cin >> numberOfGrades;

    for (int i = 0; i < numberOfGrades; ++i) {
        cout << "Enter a numeric grade between 0-100" << endl;
        cin >> grade;
        sum += grade; // Add the grade to the sum
    }

    calculateAverage(sum, numberOfGrades, average);
    letterGrade = determineLetterGrade(average);

    cout << "The grade is " << letterGrade << endl;

    return 0;
}

void calculateAverage(int sum, int count, double& avg) {
    if (count > 0) {
        avg = static_cast<double>(sum) / count;
    } else {
        avg = 0;
    }
}

char determineLetterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
