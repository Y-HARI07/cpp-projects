// leap year checker

#include <iostream>
using namespace std;

int main(){

    int year;
    cout<< "Enter a year: ";
    cin>> year;

    if ( year % 4 == 0 ) {

        if ( year % 100 == 0 ) {
            
            if ( year % 400 == 0 )
                cout<< "A LEAP YEAR"<< endl;

        
            else
            cout<< "NOT A LEAP YEAR"<< endl;

        }

        else
            cout<< "LEAP YEAR"<< endl;

    }
    
    else 
        cout<< "NOT A LEAP YEAR"<< endl;

}