// Wap to get the area of the circle of the entered radius. 
#include <iostream>
using namespace std;
int main(){
    int area, r;
    const float pi = 3.14159265;

    cout<<"Enter the radius: ";
    cin>>r;

    area = pi * r * r;

    cout<<"Hence Area of circle is: "<<area;



}