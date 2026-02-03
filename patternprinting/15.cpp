//both up and down triangle
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows (upper triangle)
        for(int j = 1; j <= i; j++) {        // Inner loop for columns
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--) {            // Outer loop for rows (lower triangle)
        for(int j = 1; j <= i; j++) {        // Inner loop for columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}