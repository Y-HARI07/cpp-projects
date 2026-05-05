// MULTIPLY NUMBERS USING FUNCTIONS IN CPP

#include <iostream>
using namespace std;

int firstnum(){

    int multiplicand;
    cout<<"Enter the number to be multiplied: ";
    cin>> multiplicand;

    return multiplicand;
}

int secnum(){

    int multiplier;
    cout<<"Enter the times to multiply: ";
    cin>> multiplier;

    return multiplier;
}

int main(){

    int var_firstnum(firstnum()), var_secnum(secnum());   // var_firstnum for storing value taken in from firstnum, same for var_secnum
    cout<< var_firstnum<<" times "<< var_secnum<<" is: "<< var_firstnum*var_secnum;
}