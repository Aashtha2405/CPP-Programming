//modulo operator gives remainder after division
#include <iostream>
using namespace std;
int main(){
    int x = 8;
    int y = 3;
    cout<<x%y;
    return 0;
}
//some importants points about modulo operator
//1. It can be used only with integer data types
//2. a%a = 0
//3. a%b = a , if a<b
//4. (a+b)%c = ((a%c) + (b%c))%c
//5. a%(-b) = a%b
//6. (-a)%b = -(a%b)
//7. (-a)%(-b) = -(a%b)