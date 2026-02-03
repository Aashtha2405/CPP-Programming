//    *
//   **
//  ***
// **** 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows
        for(int j = 1; j <= n; j++) {        // Inner loop for columns
            if(j <= n - i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}