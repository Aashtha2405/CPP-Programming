//Taking input from user and displaying it
#include<iostream>
using namespace std;
int main(){
    int Date, Year;
    string Month;
    cout<<"Enter your date of birth: ";
    cin>>Date>>Month>>Year; //taking input from user
    cout<<"Your birthday is coming "<<Date<<"/"<<Month<<"/"<<Year<<endl; //displaying the input
    return 0;
    
}