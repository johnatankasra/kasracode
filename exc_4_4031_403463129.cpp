#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;
    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {
        int digit = number % 10;       
        reversed = reversed * 10 + digit;
        number /= 10;                 
    }

    cout << "The reverse of the number is: " << reversed << endl;

    return 0;
}