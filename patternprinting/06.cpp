//12
//ABC
//1234
//ABCDE

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows
        for(int j = 1; j <= i + 2; j++) {    // Inner loop for columns
            if(i % 2 != 0) {                  // Check if row number is odd
                cout << char(j + 64) << " "; // Print alphabets for odd rows
            } else {
                cout << j << " ";             // Print numbers for even rows
            }
        }
        cout << endl;
    }
    return 0;
}