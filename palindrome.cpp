#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    int flag=1;
    for(int i=0;i<n;i++){
      if(arr[i] != arr[n-1-i])
           flag=0;
    }
    if(flag==1)
     cout<<"String is Palindrome";
    else
     cout<<"String is not Palindrome";
    return 0;
}
