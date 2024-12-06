#include <iostream>
using namespace std;

int main() {
    int choice = 0; 
    double num1, num2, result;

    while (choice != 5) { 
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            if (choice == 1) {
                result = num1 + num2;
                cout << "The result is: " << result << endl;
            } else if (choice == 2) {
                result = num1 - num2;
                cout << "The result  is: " << result << endl;
            } else if (choice == 3) {
                result = num1 * num2;
                cout << "The result  is: " << result << endl;
            } else if (choice == 4) {
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "The result is: " << result << endl;
                } else {
                    cout << "Error " << endl;
                }
            }
        } else if (choice != 5) {
            cout << " Please try again" << endl;
        }

        cout << endl; 
    }

  
    return 0;
}
