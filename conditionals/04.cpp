//Multiple conditions using && and ||
//&&  logical and operator --> both true then only true
//|| logical or operator --> any one true then true
#include<iostream>
using namespace  std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>99 && n<1000){
        cout<<n<<" is a three digit number"<<endl;
    }
    else{
        cout<<n<<" is not a three digit number"<<endl;
    }
    return 0;
}