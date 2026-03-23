// Temprature classifier

#include <iostream>
using namespace std;

int main(){

    float temp;
    cout<< "Enter temperature in degree celcius: ";
    cin>> temp;

    if ( temp >= 100.0 ){
        cout<<"Water boils at this temperature!"<< endl;
    }

    else if ( temp < 100.00 && temp >= 36.9 ){
        cout<<"Water is hot at this temperature"<< endl;
    }

    else if ( temp < 36.9 && temp >= 20.0 ){
        cout<<"Water is warm at this temperature"<< endl;
    }

    else if ( temp < 20.0 && temp >= 0.0 ){
        cout<<"Water is cold for bath at this temperature"<< endl;
    }

    else{
        cout<<"Freezing temperature for water"<< endl;
    }
    
    if ( temp <= 37.1 && temp >= 36.9 ){
        cout<<"BODY TEMPERATURE!"<< endl;
    }

}