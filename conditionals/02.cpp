//print absolute value of a number meaning if number is negative print its positive value else print the number itself
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a>0){
        cout<<"Absolute value of "<<a<<endl;
    }
    else{
        cout<<"Absolute value of "<<-a<<endl;
    }
    return 0;
}