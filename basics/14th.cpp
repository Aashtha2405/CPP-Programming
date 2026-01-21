//Heirarchy of operators means precedence and associativity of operators
//BODMAS rule 
//:: (Scope resolution)
// ++ -- (postfix)
// ++ -- + - ! ~ sizeof (unary)
// * / %
// + -
// << >>
// < <= > >=
// == !=
// & (bitwise AND)
// ^ (bitwise XOR)
// | (bitwise OR)
// && (logical AND)
// || (logical OR)
// ?: (conditional operator)
// = += -= *= /= %= (assignment)
// , (comma)
#include<iostream>
using namespace std;
int main(){
    int a=4, b=5;
    int c= a++ + ++a - --b + b--;
    // c= 4 + 6 - 4 + 5 = 11
    cout<<"The value of c is: " << c << endl;
    return 0;
}