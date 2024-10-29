// Wap for bitwise operator. 

#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout<<"Enter the Number : ";
    cin>>num1;
    cout<<"Enter the Number2 : ";
    cin>>num2;

    int andResult = num1 & num2;
    cout<<"Bitwise AND (Num1 & Num2): "<< andResult <<endl;

    int orResult = num1 | num2;
    cout<<"Bitwise OR (Num1 | Num2): "<< orResult <<endl;

    int xorResult = num1 ^ num2;
    cout<<"Bitwise XOR (Num1 ^ Num2): "<< xorResult <<endl;


    // Bitwise Not

    int notNum1 = ~num1;
    int notNum2 = ~num2;
    cout<<"Bitwise NOT (~Num1): " << notNum1 <<endl;
    cout<<"Bitwise Not (~Num2): " <<notNum2 <<endl;

    // Left Shift

    int leftShiftNum1 = num1 <<1;
    int leftShiftNum2 = num2 <<1;

    cout<<" Left Shift (Num1 << 1): " <<leftShiftNum1<<endl;  
    cout<<" Left Shift (Num2 << 1): " <<leftShiftNum2<<endl;  


    // Right Shift 

    int rightShiftNum1 = num1 >>1;
    int rightShiftNum2 = num2 >>1;

    cout<<" right Shift (Num1 >> 1): " <<rightShiftNum1<<endl;  
    cout<<" right Shift (Num2 >> 1): " <<rightShiftNum2<<endl; 

    

}