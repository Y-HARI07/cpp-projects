// Grade checker

#include <iostream>
using namespace std;


int main(){
    int x;
    cout<<"Enter your marks: ";
    cin>>x;
    
    if( x < 0 || x > 100)
        cout<<"Invalid marks!"<<endl;
    
    else if( x >= 90)
        cout<<"Your grade is A"<< endl;
    
    else if( x >= 75)
        cout<<"Your grade is B"<< endl;

    else if( x >= 60)
        cout<<"Your grade is C"<< endl;

    else
        cout<<"Your grade is F"<<endl;

    }

