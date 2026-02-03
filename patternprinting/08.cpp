//floyd triangle
#include <iostream>
using namespace std;
int main() {
    int n, num = 1;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows
        for(int j = 1; j <= i; j++) {        // Inner loop for columns
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}