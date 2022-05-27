// printing all subarray of an array 
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[5]={6,2,1,0,3},count=1;
//     cout<<"Printing all subarray"<<endl;
//     for(int i=0;i<5;i++){
//         for(int j=i;j<5;j++){
//             cout<<count++<<")";
//             cout<<"[";
//             for(int k =i;k<=j;k++)
//                 cout<<arr[k]<<" ";
//         cout<<"]";
//         cout<<"\n";
//         }
//     }
//     return 0;
// }

// sum of all subarray

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[5]={1,2,0,7,2},sum=0;
//     cout<<"Sum of all subarray"<<endl;
//     for(int i=0;i<5;i++){
//         for(int j=i;j<5;j++){
//             for(int k =i;k<=j;k++)
//                 sum +=arr[k];
//         }
//     }
//     cout<<sum;
//     return 0;
// }
