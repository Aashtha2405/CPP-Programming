//sides of a triangle
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first side of a triangle:";
    cin>>a;
    cout<<"Enter second side of a triangle:";
    cin>>b;
    cout<<"Enter third side of a triangle:";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Triangle is valid"<<endl;
    }
    else{
        cout<<"Triangle is not valid"<<endl;
    }
    return 0;
}