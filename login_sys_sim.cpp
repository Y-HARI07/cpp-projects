// Simple login system

#include <iostream>
#include <string>
using namespace std;

int main(){

    string username, input_username;
    int password, input_password;
    username = "admin";
    password = 1234;

    cout<<"Enter username:";
    cin>> input_username;

    cout<<"Enter password:";
    cin>> input_password;

    if ( input_username != username && input_password != password ){
        cout<<"INVALID username and password!"<<endl;
        cout<<"Try again"<<endl;
    }

    else if ( input_username != username ){
        cout<<"Username not found!"<< endl; 
        cout<<"Try again"<< endl;
    }

    else if ( input_password != password ){
        cout<<"Incorrect password!"<< endl;
        cout<<"Try again"<< endl;
    }

    else {
        cout<<"Credentials matched!"<< endl;
        cout<<"Login succesful! Welcome, Admin"<< endl;
        
        cout<<"1. Dashboard"<<endl;
        cout<<"2. Settings"<<endl;
        cout<<"3. Log out"<<endl; 
    

        int choice;
        cout<<"Choose an option from above(1/2/3): ";
        cin>> choice;

        switch( choice ){

            case 1:
                cout<<"Opening dashboard..."<<endl;
                break;

            case 2:
                cout<<"Opening settings..."<<endl;
                break;

            case 3:
                cout<<"Logging out..."<<endl;
                break;

            default:
                cout<<"Invalid option!"<<endl;
                break;
        }

    }

}
