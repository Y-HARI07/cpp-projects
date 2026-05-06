// ARITHMETIC OPERATIONS ON TWO INTEGERS USING FUNCTIONS IN CPP

#include <iostream>
using namespace std;

// FUNCTION FOR ADDITION

int add_val(){

    cout<<"Enter a number: ";
    int add_var{};
    cin>> add_var;

    return add_var;
}

// FUNCTION FOR SUBSTRACTION

int sub_num(){

    cout<<"Enter a number: ";
    int sub_var{};
    cin>> sub_var;

    return sub_var;
}

// FUNCTION FOR MULTIPLICATION

int mul_num(){

    cout<<"Enter a number: ";
    int mul_var{};
    cin>> mul_var;

    return mul_var;
}

// FUNCTION FOR DIVISION

int div_num(){

    cout<<"Enter a number: ";
    int div_var{};
    cin>> div_var;

    return div_var;

}

// VOID FUNC

void askforinput(){

    cout<<"Enter the two values to perform the operation"<< endl;

}

// MAIN FUNCTION

int main(){

    // CREATING A SWITCH FOR CHOOSING OPERATIONS

    char op;
    cout<<"Enter the ARITHMETIC OPERATION TO BE PERFORMED(+/-/* OR /): ";
    cin>> op;

    switch (op){

        // ADDITION

        case '+':{
            cout<<"ADDITION OF TWO NUMBERS"<< endl;
            askforinput();
            int first_add(add_val()), sec_add(add_val());
            cout<<"The sum of two numbers is: "<< first_add + sec_add;

            break;
        }
        // SUBSTRACTION

        case '-':{
            cout<<"SUBSTRACTION OF TWO NUMBERS"<< endl;
            askforinput();
            int first_sub(sub_num()), sec_sub(sub_num());
            cout<<"The difference between the numbers is: "<< first_sub - sec_sub;

            break;
        }
        // MULTIPLICATION

        case '*':{
            cout<<"MULTIPLICATION OF TWO NUMBERS"<< endl;
            askforinput();
            int first_mul(mul_num()), sec_mul(mul_num());
            cout<<"The product of two numbers is: "<< first_mul * sec_mul;
        
            break;
        }
        // DIVISION

        case '/':{
            cout<<"DIVISION OF TWO NUMBERS"<< endl;
            askforinput();
            int first_div(div_num()), sec_div(div_num());
            
            if ( sec_div == 0 ){
                cout<<"Cannot divide by ZERO!";
            }

            else{
                cout<<"The quotient of two numbers is: "<< first_div / sec_div<< endl;
                cout<<"With the remainder: "<< first_div % sec_div<< endl;
            }
            
            break;
        }

        default:{
            cout<<"Enter a valid operator!";

            break;
        }
    }
}