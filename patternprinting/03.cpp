//1111
//2222
//3333
//4444
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter side of square: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {            // Outer loop for rows
        for(int j = 1; j <= n; j++) {        // Inner loop for columns
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}