// 1)BruteForce Approach
// #include<iostream>
// #include<climits>
// using namespace  std;
// int main()
// {
//     int n,i,j,k,max_sum = INT16_MIN,sum=0;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++){
//     cin>>arr[i];
//     }
//     for(i=0;i<n;i++){
//         for(j=i;j<n;j++){
//             sum=0;
//             for(k=i;k<=j;k++){
//                sum += arr[k]; 
//             }
//             if(max_sum < sum)
//                     max_sum = sum;
//         }
//     }
//     cout<<"Maximum sum is: "<<max_sum;
// return 0;
// }

// 2)Cummulative Sum Approach
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[]={-1,4,7,2},cumm_arr[5];
//     int i,j,max_sum = INT_MIN;
//     cumm_arr[0] = 0;
//     for(i=1;i<5;i++)
//         cumm_arr[i] = cumm_arr[i-1] + arr[i-1];
//     for(i=1;i<=4;i++){
//         int sum=0;
//         for(j=0;j<i;j++){
//             sum = cumm_arr[i] - cumm_arr[j];
//             max_sum = max(max_sum,sum);
//         }
//     }
//     cout<<"Maximum Sum Of Subarray is: "<<max_sum;
//     return 0;
// }

// 3)kadane's Algorithm
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[4]={-1,4,7,2};
//     int i,sum=0,current_sum = INT_MIN;
//     for(i=0;i<4;i++){
//         sum = sum + arr[i];
//         if(arr[i]<0)
//            sum =0;
//         current_sum = max(sum,current_sum);
//     }
//     cout<<current_sum;
//     return 0;
// }















