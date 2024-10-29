// Wap to get the simple interest . 
#include <iostream>
using namespace std;
int main(){
    int p,r,t,si;

    cout<<"Enter the Principal: ";
    cin>>p;
    cout<<"Enter the Rate: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;

    si = p * r * t / 100;

    cout<<"Simple Intrest is: "<<si;



}