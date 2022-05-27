#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++)
      if(n%i == 0)
          return false;
    return true;
}
int main(int argc, char const *argv[])
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
         if(isprime(i))
            cout<<i<<endl;
    return 0;
}
