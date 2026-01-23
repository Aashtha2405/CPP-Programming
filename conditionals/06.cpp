//Greatest of three numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is greatest"<<endl;
    }
    else{
        cout<<c<<" is greatest"<<endl;
    }
    return 0;
}