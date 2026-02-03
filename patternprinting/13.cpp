//pyramid pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows
        for(int j = 1; j <= n - i; j++) {    // Inner loop for spaces
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++) { // Inner loop for stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}