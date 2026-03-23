// Simple Calculator

#include <iostream>
using namespace std;

int main(){

    int x, y;
    cout<< "Enter first number: ";
    cin>> x; 
    cout<< "Enter second number: ";
    cin>> y;

    char op;
    cout<< "Enter operation to perform from (+,-,*,/): ";
    cin>> op;

    switch(op) {

        case '+':
            cout<< "The sum of two numbers is: "<< x + y <<endl;
            break;

        case '-':
            cout<< "The difference of two numbers is: "<< x - y <<endl;
            break;
            
        case '*':
            cout<< "The product of two numbers is: "<< x*y <<endl;
            break;

        case '/':

            if ( y != 0 )
                cout<< "The quotient of division is: "<< x/y <<endl;

            else
                cout<< "Cannot divide by ZERO!";

            break;

        default:
            cout<< "Invalid operator";
            break;
    }
}