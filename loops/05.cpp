#include<iostream>
using namespace std;
int main(){
    // Naive approach  loop runs 172 times tc=O(n)
    // for(int i=19; i<=190; i++){
    //     if(i%19==0){
    //         cout<<i<<endl;
    //     }
    // }

    // Optimized approach loop runs only 10 times tc=O(n/19)
    for(int i=19; i<=190; i=i+19){
        cout<<i<<endl;
    }
    return 0;
}
    