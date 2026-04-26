// MULTIPLICATION TABLE

#include <iostream>
using namespace std;

int main(){

    int inp_num;
    cout<< "Enter a number to get the multiplication table: ";
    cin>> inp_num;
    cout<< "The multiplication table goes like:" << endl;

    for (int i = 0; i <= 10; i++ ){    
        cout<< inp_num << " times " << i <<" = " << inp_num * i << endl;
    }
}