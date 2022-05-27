// linear_search

// #include<iostream>
// using namespace std;
// int linear_search(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//     if(arr[i]==key)
//           return i;
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int n,i,key;
//     cin>>n;
//     int arr[n];
//     for(i=1;i<=n;i++)
//         cin>>arr[i];
//     cin>>key;
//     cout<<linear_search(arr,n,key);
//     return 0;
// }

// binary search

// #include<iostream>
// using namespace std;
// int binary_search(int arr[],int n,int key){
//     int s = 0;
//     int e = n;
//     while(s<=e){
//         int m = s+e/2;
//         if(arr[m] == key)
//             return m;
//         else if(arr[m] > key){
//             e = m -1;
//         }
//         else{
//             s = m + 1;
//         }
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int n,i,key;
//     cin>>n;
//     int arr[n];
//     for(i=1;i<=n;i++)
//         cin>>arr[i];
//     cin>>key;
//     cout<<binary_search(arr,n,key);
//     return 0;
// }