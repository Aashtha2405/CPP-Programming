//float x = 5/2;  // incorrect value due to integer division because both 5 and 2 are integers
//x = 4+2%-8 = 4+2 = 6 here 2%-8 = 2%8=2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks:";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Grade A"<<endl;
    }
    else if(n>=61 and n<=80){
        cout<<"Grade B"<<endl;
    }
    else if(n>=41 and n<=60){
        cout<<"Grade C"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}