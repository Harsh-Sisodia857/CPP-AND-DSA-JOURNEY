#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,j=2;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd = arr[1] - arr[0];
    int ans = 2;
    int curr = 2;
    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
