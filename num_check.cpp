// even or odd, posotive or negative number

#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;

// even or odd check

    cout<< ( x % 2 == 0 ? "The number is even" : "The number is odd")<< endl;

// positive or negative check

    if ( x == 0)
        cout<<"The number is ZERO"<<endl;

    else if ( x > 0)
        cout<<"The number is POSITIVE"<<endl;
    
    else if ( x < 0)
        cout<<"The number is NEGATIVE"<<endl;
    
}
