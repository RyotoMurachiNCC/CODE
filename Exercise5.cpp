//Name: Ryoto Murachi
//CSCE306
//Date: 09/01/2026

//This code is a simple calulator.
//1. Read two numbers from the user
//2. Print their sum, difference, product
//3. Print the quotient with 2 decimals(avoid integer division)
//4. Print the remainder using %
//5. Bonus: Read the operator(+ - * /)too

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double myFirstVariables, mySecondVariables;
    char myOperator;

    cout << "Enter first number: ";
    cin >> myFirstVariables;

    cout << "Enter operator (+ - * /): ";
    cin >> myOperator;

    cout << "Enter second number: ";
    cin >> mySecondVariables;

    if (myOperator == '+'){
        cout << "Sum: " << myFirstVariables + mySecondVariables << endl;
    } else if (myOperator == '-'){
        cout << "Difference: " << myFirstVariables - mySecondVariables << endl;
    } else if (myOperator == '*'){
        cout << "Product: " << myFirstVariables * mySecondVariables << endl;
    } else if (myOperator == '/'){
        if (mySecondVariables != 0){
            cout << fixed << setprecision(2);
            cout << "Quotient: " << myFirstVariables / mySecondVariables << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Invalid operator!" << endl;
    }

    if ((int)mySecondVariables != 0){
        cout << "Remainder: " << (int)myFirstVariables % (int)mySecondVariables << endl;
    } else {
        cout << "Error: Cannot compute remainder with zero!" << endl;
    }

    return 0;

}