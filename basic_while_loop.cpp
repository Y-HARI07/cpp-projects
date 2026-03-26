// Basic while loop

#include <iostream>
using namespace std;

int main(){

    int count;
    cout<<"Enter a number: ";
    cin>> count;

    while( count >= 0 )
    {
        cout<< count<< endl;
        --count;
    }

    cout<<"BLASTOFF!";

}