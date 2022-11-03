#include<iostream>
using namespace std;

//    LCM(a, b) = (a x b) / GCD(a, b)

int gcd(int a,int b){
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
int main(int argc, char const *argv[])
{
    cout<<gcd(48,24);
    return 0;
}
