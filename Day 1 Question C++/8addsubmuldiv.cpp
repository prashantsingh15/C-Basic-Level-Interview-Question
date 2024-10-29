// Wap to get the input of the two numbers and perform the addition , subtraction, multiplication and division on them. 

#include <iostream>
using namespace std;
int main(){
    float num1, num2;

    cout<<"Enter the Number 1: ";
    cin>>num1;
    cout<<"Enter the Number 2: ";
    cin>>num2;

    cout<<"Addition : ";
    cout<<num1 + num2<<endl;

    cout<<"Subtraction: ";
    cout<<num1 - num2<<endl;

    cout<<"Multiplication: ";
    cout<< num1 * num2<<endl;

    cout<<"Division: ";

    if ( num2 != 0){
        cout<<num1 / num2<<endl;

    }

    else{
        
    }
    

}