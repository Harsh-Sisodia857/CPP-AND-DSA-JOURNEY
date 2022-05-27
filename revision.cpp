// factorial of a number
#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }

// ncr
// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<(factorial(n)/(factorial(r)*factorial(n-r)));
//     return 0;
// }

// pascal Triangle
// int main(int argc, char const *argv[])
// {
//     int row,i,j;
//     cin>>row;
//     for(i= 0;i<row;i++){
//         for(j= 0;j<=i;j++){
//             cout<<(factorial(i)/(factorial(j)*factorial(i-j)))<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Number is prime or not

// int main(int argc, char const *argv[])
// {
//     int n;
//     int i,flag = 0;
//     cin>>n;
//     for(i=2;i<sqrt(n);i++){
//         if(n%i==0){
//             cout<<"Number is not prime";
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0)
//         cout<<"Number is Prime";
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int digit=0,num,x,sum=0;
//     cin>>num;
//     x = num;
//     while(x>0)
//     {
//         digit++;
//         x = x/10;
//     }
//     int n = num;
//     while(n>0){
//        int last_digit = n%10;
//        sum += pow(last_digit,digit);
//        n = n/10;
//     }
//     cout<<sum<<endl;
//     if(sum == num)
//         cout<<"Number is Armstrong";
//     else
//         cout<<"Number is not Armstrong";
//     return 0;
// }

// Reversing a string

// void ros(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }
//     string rs = s.substr(1);
//     ros(rs);
//     cout<<s[0];
// }
// int main(int argc, char const *argv[])
// {
//     ros("Anmol");
//     return 0;
// }

// Replacing some characters in string with some other characters

// void replace(string s){
//     if(s.length() == 0)
//         return;
//     else if (s[0] == 'p' && s[1] == 'i'){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replace(s.substr(1));
//     }
// }
// int main(int argc, char const *argv[])
// {
//     replace("piiippippipppiiii");
//     return 0;
// }

// Tower of Hanoi

// void TOH(int n,char AUX,char HElPER,char DEST){
//     if(n>0){
//         TOH(n-1,AUX,DEST,HElPER);
//         cout<<AUX<<" to "<<DEST<<endl;
//         TOH(n-1,HElPER,AUX,DEST);
//     }
//     else
//         return;
// }
// int main(int argc, char const *argv[])
// {
//     cout<<"Enter number of disk:";
//     int n;
//     cin>>n;
//     TOH(n,'A','B','C');
//     return 0;
// }

// Taking all x to end of string

// string txe(string s)
// {
//     if (s.length() == 0)
//         return "";
//     char x = s[0];
//     string xte = txe(s.substr(1));
//     if (x == 'x')
//         return xte + x;
//     else
//         return x + xte;
// }
// int main(int argc, char const *argv[])
// {
//     cout<<txe("xeewxerxjhxfwxwd");
//     return 0;
// }

// Calculating n^p
// int power_to_p(int n,int p){
//     if(p>0){
//         if(p==0)
//         return 1;
//     if(p==1)
//         return n;
//     else
//     {
//         return (n * power_to_p(n,p-1));
//     }
//     }
//     else
//       exit(0);
// }
// int main(int argc, char const *argv[])
// {
//     int n,p;
//     cin>>n>>p;
//     int res = power_to_p(n,p);
//     cout<<res;
//     return 0;
// }

// selection sort
// Time complexity = n^2
// void selection_sort(int arr[],int n){
//     int i,j;
//     for(i=0;i<n-1;i++){
//     for(j=i+1;j<n;j++){
//         if(arr[i] > arr[j]){
//             int swap = arr[i];
//             arr[i] = arr[j];
//             arr[j] = swap;
//         }
//     }
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = { 4,3,2,5,51,1};
//     selection_sort(arr,6);
//     for(int i=0;i<6;i++)
//         cout<<arr[i]<<" ";
//     return 0;
// }

// Insertion sort - Select an element from unsorted part of an array and insert it to its correct option in sorted part of an array
// Time complexity = n^2

// void insertion_sort(int arr[],int n){
//     int i,j,current;
//     for(int i=1;i<n;i++)
//     {
//         current = arr[i];
//         j = i-1;
//         while(arr[j]>current && j>=0)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = current;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {4,2,5,22,12,52,9,7,0,5};
//     insertion_sort(arr,10);
//      for(int i=0;i<10;i++)
//         cout<<arr[i]<<"\t";
//     return 0;
// }

// Bubble sort
// Time complexity - n^2

// void bubble_sort(int arr[], int n)
// {
//     for (int round = 0; round < n - 1; round++)
//     {
//         for (int j = 0; j < n - 1 - round; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {4, 2, 5, 22, 12, 52, 9, 7, 0, 5};
//     bubble_sort(arr, 10);
//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << "\t";
//     return 0;
// }

// Maximum in an array

// int main(int argc, char const *argv[])
// {
//     int n,i,maximum = INT16_MIN,pos=0;
//     cout<<"Number of element in an array:";
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//         cin>>arr[i];
//     for(i=0;i<n;i++){
//         if(arr[i]>maximum){
//             maximum = arr[i];
//             pos = i;
//         }
//     }
//     cout<<"Maximum element is "<<maximum<<" at position "<<pos+1;
//     return 0;
// }

// Printing of all subarrays and sum of all subarray

// int main(int argc, char const *argv[])
// {
//     int arr[] = {6,5,34,2,1,9};
//     int count = 1,i,j,k,sum=0;
//     cout<<"Printing all subarray"<<endl;
//     for(i=0;i<6;i++){
//         for(j=i;j<6;j++){
//             cout<<count<<")"<<"[";
//             for(k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//                 sum += arr[k];
//             }
//             cout<<"]"<<endl;
//             count++;
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// Longest arithmetic subarray

// int main(int argc, char const *argv[])
// {
//     int i,n,j=2;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//         int ans = 2;
//         int curr = 2;
//         int prev = arr[1] - arr[0];
//     while(j<n){
//         if(prev == arr[j] - arr[j-1]){
//             curr++;
//         }
//         else{
//             prev = arr[j] - arr[j-1];
//             curr = 2;
//         }
//         ans = max(ans,curr);
//         j++;
//     }
//     cout<<"Longest arithmetic subarray "<<ans;
//     return 0;
// }

// Maximum subarray sum
// 1)Brute Force Approach

// int main(int argc, char const *argv[])
// {
//     int n,i,j,k,sum,max_sum = INT32_MIN;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//         cin>>arr[i];
//     for(i=0;i<n;i++){
//         for(j=i;j<n;j++){
//             sum = 0;
//             for(k=i;k<=j;k++){
//                 sum += arr[k];
//             }
//             max_sum = max(sum,max_sum);
//         }
//     }
//     cout<<max_sum;
//     return 0;
// }

// 2)cummulative sum approach

// int main(int argc, char const *argv[])
// {
//     int arr[] = {-1,4,3,7},cumm_arr[5];
//     int i,j,max_sum = INT32_MIN,sum;
//     cumm_arr[0] = 0;
//     for(i=1;i<5;i++)
//         cumm_arr[i] = cumm_arr[i-1] + arr[i-1];
//     for(i=1;i<5;i++){
//         sum = 0;
//         for(j=0;j<i;j++){
//         sum = cumm_arr[i] - cumm_arr[j];
//         max_sum = max(max_sum,sum);
//         }
//     }
//     cout<<"Maximum sum of subarray is : "<<max_sum;
//     return 0;
// }

// 3)Kadane's Algorithm

// int main(int argc, char const *argv[])
// {
//     int arr[] = {-1,4,-6,7,-4},i,sum=0,max_sum = INT32_MIN;
//     for(i=0;i<4;i++){
//         sum += arr[i];
//         if(sum<0)
//             sum = 0;
//     max_sum = max(max_sum,sum);
//     }
//     cout<<max_sum;
//     return 0;
// }

// Maximum sum from circular subarray

// int kadane(int arr[],int size){
//     int sum=0,max_ele= INT16_MIN;
//     for(int i=0;i<size;i++){
//         sum += arr[i];
//         if(sum<0)
//             sum = 0;
//         max_ele = max(max_ele,sum);
//     }
//     return max_ele;
//  }
// int main(int argc, char const *argv[])
// {
//     int wrap_sum,no_wrap_sum,total_sum=0,i;
//     int arr[] = {7,8,-4,6,2};
//     no_wrap_sum = kadane(arr,5);
//     for(i=0;i<5;i++){
//         total_sum += arr[i];
//         arr[i] = -arr[i];
//     }
//     wrap_sum =total_sum + kadane(arr,5);
//     cout<<max(wrap_sum,no_wrap_sum);
//     return 0;
// }

// Pair sum problem

// bool pair_sum(int arr[],int k,int n){
//     int low = 0;
//     int high = n-1;
//     while(low<high){
//         if(arr[low] + arr[high] == k){
//         cout<<arr[low]<<" "<<arr[high]<<endl;
//         return true;
//     }
//     else if(arr[low] + arr[high] > k) {
//         high--;
//     }
//     else{
//         low++;
//     }
//     }
//     return false;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {2,4,7,11,14,16,20,21};
//     int k = 31;
//     cout<<pair_sum(arr,k,8);
//     return 0;
// }

// Matrix multiplication

// int main(int argc, char const *argv[])
// {
//     int n1,n2,n3,i,j,k;
//     int arr1[n1][n2],arr2[n2][n3],ans[n1][n3];
//     cin>>n1;
//     cin>>n2;
//     cin>>n3;
//     cout<<"Enter first matrix:"<<endl;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             cout<<arr1[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     cout<<"Enter second matrix:"<<endl;
//     for(i=0;i<n2;i++){
//         for(j=0;j<n3;j++){
//             cin>>arr2[i][j];
//         }
//     }
//     for(i=0;i<n2;i++){
//         for(j=0;j<n3;j++){
//             cout<<arr2[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n3;j++){
//             ans[i][j] = 0;
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n3;j++){
//             for(k=0;k<n2;k++){
//                 ans[i][j] += (arr1[i][k]*arr2[k][j]);
//             }
//         }
//     }
//     cout<<"Multiplication of matrix:"<<endl;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n3;j++){
//             cout<<ans[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Merge sort

// void merge(int arr[],int l,int mid,int r){
//     int n1 = mid - l + 1;
//     int n2 = r - mid;
//     int arr1[n1],arr2[n2],i,j,k;
//     for(i = 0; i<n1;i++)
//         arr1[i] = arr[l + i];
//     for(i = 0; i<n2; i++)
//         arr2[i] = arr[mid + 1 + i];
//     i = 0;
//     j = 0;
//     k = l;
//     while(i<n1 && j<n2){
//         if(arr1[i] < arr2[j]){
//         arr[k] = arr1[i];
//         i++; k++;
//         }
//         else{
//             arr[k] = arr2[j];
//             j++; k++;
//         }
//     }
//     while(i<n1){
//         arr[k] = arr1[i];
//         i++; k++;
//     }
//     while(j<n2){
//         arr[k] = arr2[j];
//         j++; k++;
//     }
// }
// void mergeSort(int arr[],int l,int r){
//     if(l<r){
//         int mid = (l + r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++)
//         cin>>arr[i];
//     mergeSort(arr,0,n-1);
//     for(int i = 0; i<n;i++)
//         cout<<arr[i]<<" ";
//     return 0;
// }

// Quick Sort
// void swap(int arr[], int a, int b)
// {
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }

// int partition(int arr[], int l, int r)
// {
//     int pivot = arr[r];
//     int i = l - 1, j;
//     for (j = l; j < r; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, r);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int pi = partition(arr, l, r);
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, r);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     quickSort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Count Inversion

// long long merge(int arr[], int l, int mid, int r)
// {
//     long long inv = 0;
//     int n1 = mid - l + 1;
//     int n2 = r - mid;
//     int arr1[n1], arr2[n2], i, j, k;
//     for (i = 0; i < n1; i++)
//         arr1[i] = arr[l + i];
//     for (i = 0; i < n2; i++)
//         arr2[i] = arr[mid + 1 + i];
//     i = 0;
//     j = 0;
//     k = l;
//     while (i < n1 && j < n2)
//     {
//         if (arr1[i] > arr2[j])
//         {
//             arr[k] = arr2[j];
//             j++;
//             k++;
//             inv += n1 - i;
//         }
//         else
//         {
//             arr[k] = arr1[i];
//             k++;
//             i++;
//         }
//     }
//     while (i < n1)
//     {
//         arr[k] = arr1[i];
//         k++;
//         i++;
//     }
//     while (j < n2)
//     {
//         arr[k] = arr2[j];
//         j++;
//         k++;
//         inv += n1 - i;
//     }
//     return inv;
// }
// long long mergeSort(int arr[], int l, int r)
// {
//     long long inv = 0;
//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         inv += mergeSort(arr, l, mid);
//         inv += mergeSort(arr, mid + 1, r);
//         inv += merge(arr, l, mid, r);
//     }
//     return inv;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {13, 4, 5,2, 18};
//     int inversion = mergeSort(arr, 0, 3);
//     cout << inversion;
//     return 0;
// }
