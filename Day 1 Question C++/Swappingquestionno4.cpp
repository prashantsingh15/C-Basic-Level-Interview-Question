// Wap for swapping two variables. 

#include <iostream>
using namespace std;
int main(){

    int a,b;

    cout<<"Enter the Number a: ";
    cin>>a;
    cout<<"Enter the Number b: ";
    cin>>b;


    cout<<"Previous value of a is: "<<a<<endl;
    cout<<"Previous value of b is: "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"Here is the swapped value of a is: "<<a<<endl;
    cout<<"Here is the swapped value of b is: "<<b;

    
}