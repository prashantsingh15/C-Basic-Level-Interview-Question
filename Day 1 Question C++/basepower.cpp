// Wap to take the base and power from the user and find the answer using do while loop .

#include <iostream>
using namespace std;
int main(){
    int base, power;
    cout<<"Enter the Base: ";
    cin>>base;
    cout<<"Enter the Power: ";
    cin>>power;

    int count = 0;

    int result = 1;


    


    do{
        result *= base;
        count++;

    }while(count < power);

    cout<< "Result: "<< result <<endl;



}