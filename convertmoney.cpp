// This program will convert from Miles to kilometers or vice versa

// Last Modified Date: 4/17/2024

#include <iostream>
#include <iomanip>
using namespace std;

// Conversion constants
const double MILES_TO_KILOMETERS = 1.61;
const double KILOMETERS_TO_MILES = 0.621;

// Function prototypes
double milesToKilometers(double miles);
double kilometersToMiles(double kilometers);

int main() {
    int choice;
    double miles, kilometers;

    // Set precision for output
    cout << fixed << setprecision(3);

    do {
        // Menu
        cout << "Please input\n"
             << "1 Convert miles to kilometers\n"
             << "2 Convert kilometers to miles\n"
             << "3 Quit\n";
        cin >> choice;

        // Process choice
        switch (choice) {
            case 1:
                cout << "Please input the miles to be converted\n";
                cin >> miles;
                cout << miles << " miles = " << milesToKilometers(miles) << " kilometers\n";
                break;
            case 2:
                cout << "Please input the kilometers to be converted\n";
                cin >> kilometers;
                cout << kilometers << " kilometers = " << kilometersToMiles(kilometers) << " miles\n";
                break;
            case 3:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid option, please try again.\n";
        }
    } while (choice != 3);

    return 0;
}

double milesToKilometers(double miles) {
    return miles * MILES_TO_KILOMETERS;
}

double kilometersToMiles(double kilometers) {
    return kilometers * KILOMETERS_TO_MILES;
}
