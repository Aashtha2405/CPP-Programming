//display this AP-1,3,5,7,9......upto n terms is AP ka last tern = first term + (n-1)*d and here first term=1 d=
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        cout<<i<<endl;
    }
    return 0;
}


//similar problems
//4,7,10,13,16....upto n terms
//2,4,8,16,32....upto n terms


//another approach
//4 7 10 13 16 ....upto n terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int a = 4;
    for(int i=1;i<=n;i++){
       cout<<a<<endl;
       a+=3;
    }
    return 0;
}