// ATM machine

#include <iostream>
using namespace std;

int main(){

    int pin;                
    cout<<"Enter PIN: ";
    cin>> pin;

    float amount = 5000.0;      // available balance

    float w_amount;     // withdrawal amount
    cout<<"Enter the amount u want to withdraw: ";
    cin>> w_amount;

    cout<<( pin == 1234  ? "PIN MATCHED" : "PIN UNMATCHED") <<endl; 


    if ( pin == 1234 ){

        if ( w_amount <= 0 ){
            cout<<"INVALID AMOUNT"<<endl;
        }

        else if ( w_amount > amount ){
            cout<<"INSUFFICIENT FUNDS"<<endl;
        }

        else if ( w_amount > 10000.0 ){
            cout<<"Single withdrawal limit is 10000"<< endl;
        }

        else { 
            cout<<"Dispensing amount: "<< w_amount<< endl;
            cout<<"The remaining balance is: "<< ( amount - w_amount ) <<endl;

            if ( amount - w_amount < 500 ){
                cout<<"Low balance warning!"<< endl;
                cout<<"Bank balance less than 500"<< endl;
            }
        }
    
    }

    else{
        cout<<"ACCESS DENIED!"<< endl;
        cout<<"TRY AGAIN LATER"<< endl;
    }

}