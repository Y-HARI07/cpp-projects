#include <iostream>
using namespace std;

int main(){

    // For loop in cpp
    int for_loop_var;
    cout<<"Enter a number to count upto using for loop: ";
    cin>> for_loop_var;

    for (int i = 0; i <= for_loop_var ; i++)
    {
        /* code */
        cout<< i << endl;
        
    }
    
    // while loop in cpp

    int while_loop_var, j = 0;
    cout<<"Enter a number to count upto using while loop: ";
    cin>> while_loop_var;

    while ( j <= while_loop_var ){
        cout<< j << endl;
        j++;
    }

    // Do while loop

    int do_while_var, k = 0;
    cout<<"Enter a number to count upto using do while loop: ";
    cin>> do_while_var;
    do{
        cout<< k << endl;
        k++;
    } while ( k <= do_while_var );

}