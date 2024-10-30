#include <iostream>
using namespace std;

int main() {
    bool value;
    cout << "Enter a boolean value (0 for false, 1 for true): ";
    cin >> value;

 // Using the not operator
    bool result = not value;

    cout << "The result of not " << value << " is: " << result << endl;

}
