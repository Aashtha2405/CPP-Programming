//  *
//  *
//*****
//  *  
//  * 
#include <iostream>
using namespace std;
int main() {
  int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int mid = n/2 + 1;
    for(int i = 1; i <= n; i++) {            // Outer loop
        for(int j = 1; j <= n; j++) {        // Inner loop
            if(j==mid || i==mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
}