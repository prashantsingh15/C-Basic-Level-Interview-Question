// WAP get the sum of the numbers from 1 to 10. 

#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int i  = 1;

    do{
        sum = sum + i;
        i++;

    } while (i <= 10);
    cout<<" Sum of the Number is: "<<sum<<endl;

}
