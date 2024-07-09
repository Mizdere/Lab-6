#include <iostream>
#include <iomanip>
using namespace std;

// This program will demonstrate the scope rules.

// Last Modified Date: 4/17/2024

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
    cout << fixed << showpoint << setprecision(2);
    float radius = 12;

    cout << "Main function outer block" << endl;
    cout << "PI, RATE, radius, findArea, and findCircumference are active here" << endl << endl;

    {
        float area;

        cout << "Main function first inner block" << endl;
        cout << "PI, RATE, radius, area, findArea, and findCircumference are active here" << endl << endl;

        // Call findArea function to compute the area
        findArea(radius, area);

        cout << "The radius = " << radius << endl;
        cout << "The area = " << area << endl << endl;
    }

    {
        float radius = 10; // This local variable shadows the outer `radius`
        float circumference;

        cout << "Main function second inner block" << endl;
        cout << "PI, RATE, radius, circumference, findArea, and findCircumference are active here" << endl << endl;

        // Call findCircumference function to compute the circumference
        findCircumference(radius, circumference);

        cout << "The radius = " << radius << endl;
        cout << "The circumference = " << circumference << endl << endl;
    }

    cout << "Main function after all the calls" << endl;
    cout << "PI, RATE, radius, findArea, and findCircumference are active here" << endl << endl;

    return 0;
}

// *********************************************************************
// findArea
//
// task: This function finds the area of a circle given its radius
// data in: radius of a circle
// data out: answer (which alters the corresponding actual parameter)
//
// ********************************************************************

void findArea(float rad, float& answer)
{
    cout << "AREA FUNCTION" << endl << endl;
    cout << "PI, rad, answer, and findArea are active here" << endl << endl;
    answer = PI * rad * rad; // area = π r^2
}

// ******************************************************************************
// findCircumference
//
// task: This function finds the circumference of a circle given its radius
// data in: radius of a circle
// data out: distance (which alters the corresponding actual parameter)
//
// ******************************************************************************

void findCircumference(float length, float& distance)
{
    cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
    cout << "PI, length, distance, and findCircumference are active here" << endl << endl;
    distance = 2 * PI * length; // circumference = 2πr
}
