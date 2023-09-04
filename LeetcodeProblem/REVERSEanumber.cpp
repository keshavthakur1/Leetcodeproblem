#include<iostream>
using namespace std;

int main() {
    int n;
    
    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> n;

    int revNum = 0;

    while (n > 0) {
        int digit = n % 10;
        revNum = (revNum * 10) + digit;
        n = n / 10;
    }
    
    // Print the reversed number
    cout << "Reversed number: " << revNum << endl;

    return 0;
}
