// Record breaking day 

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n,i,j;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//         cin>>arr[i];
//     for(i=0;i<n;i++){
//         for(j=i;j>=0;j--){
//             if(arr[j]<=arr[i] && arr[j]>arr[j+1]){
//                 cout<<"Reord Breaking Day "<<arr[i]<<endl;
//             }
//             else{
//                 break;   
//             }
//         }
//     }
//     return 0;
// }

// The Problem is this code has time complexity of n^2 to reduce the time complexity we can do the following changes 

#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,ans;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
        
        ans = arr[i] > max()
    }
    return 0;
}

