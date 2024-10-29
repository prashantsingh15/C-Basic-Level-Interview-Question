// Wap to get the table of the number entered. 

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number ";
    cin>> num;

    for(int i = 1; i < 10; i++){
        int table = i * num;

        cout<< num << " * " << i <<" = " << table<<endl;
  

    }
    
}