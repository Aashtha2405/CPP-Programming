//Ternary operator
//expression 1 ? expression 2 : expression 3
//if expression 1 is true then expression 2 is executed otherwise expression 3 is executed
//used as a shorthand for if-else statements
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    //(conditional) ? true case : false case;
    (n%2==0) ? cout<<n<<" is even"<<endl : cout<<n<<" is odd"<<endl;
    return 0;
}