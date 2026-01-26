// palindrome number check
#include <iostream>
using namespace std;

int main() {
    int n, original, digit, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n > 0) {
        digit = n % 10;                 // get last digit
        reverse = reverse * 10 + digit; // make reverse
        n = n / 10;                    // remove last digit
    }

    if(reverse == original)
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome Number";

    return 0;
}
