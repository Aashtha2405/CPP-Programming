// Armstrong number check
#include <iostream>
using namespace std;

int main() {
    int n, original, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
