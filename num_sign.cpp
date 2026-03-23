// Number sign and Magnitude

#include <iostream>
using namespace std;

int main(){

    float num;
    cout<< "Enter a number: ";
    cin>> num;

    cout<< ( num > 0 ? "POSITIVE number" : ( num < 0 ? "NEAGTIVE number" : "ZERO"))<< endl;

    if ( num > 50 )
        cout<< "Number is greater than 50 in comparision"<< endl;

    else if ( num == 50 )
        cout<< "Number is equal to 50"<< endl;

    else
        cout<< "Number is less than 50"<< endl;
}