#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i;
    cout<<"Enter a number to check it is prime or not:"<<endl;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i == 0)
            break;   
    }
     if(i==n)
        cout<<"Prime"<<endl;
    else
        cout<<"Not a prime number"<<endl;
    return 0;
}
 