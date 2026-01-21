//Arithmatic Operators and increment/decrement operators
#include<iostream>
using namespace std;
int main(){
    int a=4, b=8;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl; //post-increment
    cout<<"The value of a-- is "<<a--<<endl; //post-decrement
    cout<<"The value of ++a is "<<++a<<endl; //pre-increment
    cout<<"The value of --a is "<<--a<<endl; //pre-decrement
    return 0;
}