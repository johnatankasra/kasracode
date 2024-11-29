
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string answer;

    cout << "How old are you? ";
    cin >> n;

    if (n < 12) {
        cout << "Your ticket will be 10$.\n";
    } else if (n >= 12 && n < 18) {
        cout << "Are you a member of our club? (yes/no): ";
        cin >> answer;

        if (answer == "yes" || answer == "Yes") {
            cout << "Your ticket will be 12$.\n";
        } else if (answer == "no" || answer == "No") {
            cout << "Your ticket will be 15$.\n";
        }
    } else if (n >= 18 && n < 60) {
        cout << "Are you a member of our club? (yes/no): ";
        cin >> answer;

        if (answer == "yes" || answer == "Yes") {
            cout << "Your ticket will be 20$.\n";
        } else if (answer == "no" || answer == "No") {
            cout << "Your ticket will be 25$.\n";
        }
    } else if (n >= 60) {
        cout << "My young friend! Your ticket will be only 10$.\n";
    }

    return 0;
}
