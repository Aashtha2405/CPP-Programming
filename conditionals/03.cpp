//profit/loss  program
#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Enter cp and sp respectively:";
    cin>>cp>>sp;
    if(sp>cp){
        cout<<"Profit of "<<sp-cp<<endl;
    }
    else if(cp>sp){
        cout<<"Loss of "<<cp-sp<<endl;
    }
    else{
        cout<<"No profit no loss"<<endl;
    }
    return 0;
}