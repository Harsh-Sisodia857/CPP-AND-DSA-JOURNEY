#include<iostream>
using namespace std;
int factorial(int n){
  int fact = 1;
  for(int i=2;i<=n;i++)
        fact *= i;
  return fact;
}
int main(int argc, char const *argv[])
{
    int n,r;
    cout<<"Enter the value of n and r:"<<endl;
    cin>>n>>r;
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans<<endl;
    return 0;
}
