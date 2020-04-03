// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;

// Main program
main()
{
    char oop;
    float no1, no2;

    // It allows user to enter operator i.e. +, -, *, /
    cin >> oop;

    // It allow user to enter the operands
    cin >> no1 >> no2;

    // Switch statement begins
    switch (oop) {

        // If user enter +
        case '+':
            cout << no1 + no2;
            break;

        // If user enter -
        case '-':
            cout << no1 - no2;
            break;

        // If user enter *
        case '*':
            cout << no1 * no2;
            break;

        // If user enter /
        case '/':
            cout << no1 / no2;
            break;

        // If the operator is other than +, -, * or /,
        // error message will display
        default:
            cout << "Error! operator is not correct";
            break;
    } // switch statement ends

    return 0;
} 
