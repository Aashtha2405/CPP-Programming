//0
//01
//010
//0101
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows
        for(int j = 1; j <= i; j++) {        // Inner loop for columns
            if((i+j) % 2 == 0) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}

   