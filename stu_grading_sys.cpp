// Student Result System 

#include <iostream>
using namespace std;

int main(){
    
    string name;
    float a, b, c;
    
    cout<<"Enter name of student: ";
    cin>> name;
    cout<<"Enter marks in first subject: ";
    cin>> a;
    cout<<"Enter marks for second subject: ";
    cin>> b;
    cout<<"Enter marks for third subject: ";
    cin>> c;
    
    float avg;
    avg = (a+b+c)/3;
    
    if ( a >= 30 && b >= 30 && c >= 30 ){{
        cout<<( avg >= 40 ? "PASS" : "FAIL" )<< endl;
        }

        if ( avg >= 90 ) {
            cout<< name << " has passed with an average of: "<< avg<< endl;
            cout<<" and has been granted grade A"<< endl;
            }
        
        else if ( avg >= 75 ) {
            cout<< name << " has passed with an average of: "<< avg<< endl;
            cout<<" and has been granted grade B"<< endl;
        }
    
        else if ( avg >= 60 ) {
            cout<< name << " has passed with an average of: "<< avg<< endl;
            cout<<" and has been granted grade C"<< endl;
        }
    
        else if ( avg >= 40 ) {
            cout<< name << " has passed with an average of: "<< avg<< endl;
            cout<<" and has been granted grade D"<< endl;
        }
    
        else {
            cout<< name << " has been FAILED with an average of: "<< avg<< endl;
            cout<< name << " didn't meet the qualifying criteria"<< endl;
            cout<< name << " please attend remidial classes"<< endl;
        }
    }
    
    else{
        cout<< name << " has failed becuase one of the subject has less than 30 marks"<< endl;
        cout<< name << " please attend remidial classes"<< endl;
    }
}

    