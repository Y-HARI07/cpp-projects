// SUM OF TWO NUMBERS USING FUNCTION

#include <iostream>
using namespace std;

// FUNCTION FOR SUM

void sum( int num1, int num2 ){
    int s = num1 + num2;
    cout<<"The sum is: "<< s << endl;
}

int main(){

    int first_num, sec_num;
    cout<<"Enter the first number: ";
    cin>> first_num;
    cout<<"Enter the second number: ";
    cin>> sec_num;

    cout<<"Performing addition of two numbers"<< endl;
    sum( first_num, sec_num );

}