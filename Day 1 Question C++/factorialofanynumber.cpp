// Wap to print the factorial of any number entered. 

#include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    long long factorial = 1;

    if ( num < 0){
        cout<<" Factorial is not defined for negative number... ";

    }

    else{
        for (int i = 1; i <= num; i++){
            factorial *= i;

        }
        cout<<"Factorial of "<< num <<" = "<<factorial;
        
    }



}