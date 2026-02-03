#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square: ";
    cin>>n;

    for(int i=1; i<=n; i++){            // Outer loop for rows
        for(int j=1; j<=n; j++){        // Inner loop for columns
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}