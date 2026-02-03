//FLIP TRIANGLE PATTERN
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows
        for(int j = 1; j<=n-i+1; j++) {        // Inner loop for columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}