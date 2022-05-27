// selection sort 

// #include<iostream>
// using namespace std;
// void selection_sort(int arr[],int n){
//     int i,j;
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     selection_sort(arr,n);
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// bubble sort 

// #include<iostream>
// using namespace std;
// void bubble_sort(int arr[],int n){
//     for(int round=0;round<n-1;round++){
//         for(int j=0;j<n-round-1;j++){
//            if(arr[j]>arr[j+1]){
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//         }
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n=5;
//     int arr[5];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     bubble_sort(arr,5);
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }