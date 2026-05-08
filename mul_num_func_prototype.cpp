// MULTIPLY NUMBERS USING FUNCTION PROTOTYPE IN CPP

#include <iostream>
using namespace std;

int userinp( int firstnum, int secnum );

//int userinp( int, int );      Alternative to the above statement

int main(){

    int var_fnum, var_snum;
    cout<<"Enter multiplicand: ";
    cin>> var_fnum;
    cout<<"Enter multiplier: ";
    cin>> var_snum;
    cout<< var_fnum<< " times "<< var_snum<< " equals: "<< userinp(var_fnum, var_snum);

    return 0;
    
}

int userinp( int firstnum, int secnum ){
    int mul = firstnum*secnum;
}