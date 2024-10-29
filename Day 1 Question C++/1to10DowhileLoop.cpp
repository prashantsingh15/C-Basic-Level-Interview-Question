// Wap to get the numbers from 1 to 10 as even or odd using do while loop 
#include <iostream>
using namespace std;
int main(){
    int i = 1;

    do {
        if (i % 2 ==0){
            cout<<"Number is even: "<<i<<endl;

        }
        else{
            cout<<"Number is odd: "<<i<<endl;
        }
        
        

        
        i++;

    } while (i <= 10);

}