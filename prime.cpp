#include <iostream>
using namespace std;

int main() {
    int num;

    cout << " enter a number : ";
    cin >> num;

    
    if (num <= 1) {
        cout << num << " is not prime " << endl;
    } else {
        
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                
                cout << num << " is not prime. " << endl;
                return 0; 
            }
        }
        
        cout << num << " is prime ." << endl;
    }

    return 0;
}