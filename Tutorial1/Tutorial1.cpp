// Tutorial1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "fucntions.h"

using namespace std;

// main():
// the entry point for the program
int main()
{
    // declare a few vars to hold our info
    // start with a control bool
    bool ex = false;
    // add a few ints for selection control and calc values
    int selection, a, b;

    // start a do...while() loop
    // this type of loop will ALWAYS run through at least once
    // it also allows us to change the exit conditions during any loop pass
    do
    {
        // print our calculator menu
        cout << "Calculator Application" << endl;
        cout << "Available functions:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Exit" << endl;
        cout << "Please select a function: ";

        // get the menu option selected
        cin >> selection;

        // switch on the menu option entered
        // switch statements work similarly to nested if/ifelse/else statements
        // but they are a bit easier to read
        switch (selection)
        {
        case 1:
            cout << "Please enter first number: ";
            cin >> a;
            cout << "Please enter second number: ";
            cin >> b;
            cout << a << " + " << b << " = " << add(a, b) << endl;
            break;
        case 2:
            cout << "Please enter first number: ";
            cin >> a;
            cout << "Please enter second number: ";
            cin >> b;
            cout << a << " - " << b << " = " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Please enter first number: ";
            cin >> a;
            cout << "Please enter second number: ";
            cin >> b;
            cout << a << " * " << b << " = " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Please enter first number: ";
            cin >> a;
            cout << "Please enter second number: ";
            cin >> b;
            if (b == 0)
                cout << "Can't divide by zero!!" << endl;\
            else
                cout << a << " / " << b << " = " << divide(a, b) << endl;
            break;
        case 5:
            cout << "Please enter first number: ";
            cin >> a;
            cout << "Please enter second number: ";
            cin >> b;
            if (b == 0)
                cout << "Can't divide by zero!!" << endl; \
            else
                cout << a << " % " << b << " = " << modulo(a, b) << endl;
            break;
        case 6:
            cout << "Goodbye!" << endl;
            ex = true;
            break;
        default:
            cout << "Invalid Option!!" << endl;
            break;
        }
    } while (ex == false);

    // always remember to return from main!
    return 0;
}
