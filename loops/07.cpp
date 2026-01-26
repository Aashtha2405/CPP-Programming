//wap to find the highest factor of a number 'n'(other than n itself)
//break statement


#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool composite = false;

    cout << "Enter number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not composite";
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            composite = true;
            break;   // loop turant stop
        }
    }

    if (composite)
        cout << "Composite number";
    else
        cout << "Not composite";

    return 0;
}
