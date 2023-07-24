#include<bits/stdc++.h>
using namespace std;
// Reversing a number
// int main()
// {
//     int n;
//     cin >> n;
//     int reversing = 0;
//     while (n != 0)
//     {
//         reversing = (reversing * 10) + n % 10;
//         n = n / 10;
//     }
//     cout << reversing << " ";
//     return 0;
// }

// Fibonacci Number
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int t1 = 0;
//     int t2 = 1;
//     int nextTerm;
//     while(n>0){
//         cout << t1 << " ";
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         n--;
//     }
//     return 0;
// }

// Prime or Non - Prime
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     bool flag = true;
//     for (int round = 2; round <= sqrt(n); round++){
//         if(n % round == 0){
//             cout << "NON - PRIME ";
//             flag = false;
//             break;
//         }
//     }
//     if(flag)
//         cout << "PRIME" << endl;
//     return 0;
// }

//Reversing a string
// void reverse(string s){
//     if(s.length() == 0){
//         return;
//     }
//     reverse(s.substr(1));
//     cout << s[0];
// }
// int main(int argc, char const *argv[])
// {
//     string s;
//     cin >> s;
//     reverse(s);
//     return 0;
// }

// Replacing some characters of string
// string xte(string s){
//     if(s.length() == 0)
//         return "";
//     char ch = s[0];
//     string c = xte(s.substr(1));
//     if(ch == 'x'){
//         return c + ch;
//     }
//     else{
//         return ch + c;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     string str = xte("xtreaxnjdfnaxjkx");
//     cout << str;
//     return 0;
// }

int arr[] = {4,-4,6,-6,10,-11,12};
int arr_size = sizeof(arr)/sizeof(int);

void Print_array(int arr[]){
    for (int round = 0; round < arr_size; round++){
        cout << arr[round] << " ";
    }
    cout << endl;
}

// selection sort
// int main(int argc, char const *argv[])
// {
//     for (int round = 1; round < arr_size-1; round++){
//         for (int j = round + 1; j < arr_size; j++){
//             if(arr[round] > arr[j]){
//                 int temp = arr[round];
//                 arr[round] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     Print_array(arr);
//     return 0;
// }

// insertion sort
// int main(int argc, char const *argv[])
// {
//     for (int round = 1; round < arr_size; round++){
//         int current = arr[round];
//         int j = round - 1;
//         while(arr[j] > current && j > 0){
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
//     Print_array(arr);
//     return 0;
// }

// bubble sort
// int main(int argc, char const *argv[])
// {
//     for (int round = 0; round < arr_size - 1; round++){
//         for (int j = 0; j < arr_size - 1 - round; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     Print_array(arr);
//     return 0;
// }

// Longest Arithmetic subarray sum
// int main(int argc, char const *argv[])
// {
//     int pd = arr[1] - arr[0], j = 2, ans = 2, curr = 2;
//     while(j < arr_size){
//         if(pd == arr[j] - arr[j-1]){
//             curr++;
//         }
//         else{
//             pd = arr[j] - arr[j - 1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }
//     cout << ans;
//     return 0;
// }

// Maximum sum of an subarray
// int arr[] = {10,7,4,-6,2};
// int arr_size = sizeof(arr) / sizeof(int);

// int main(){
//     int cumm_arr[arr_size+1];
//     cumm_arr[0] = arr[0];
//     for (int i = 1; i <= arr_size; i++){
//         cumm_arr[i] = cumm_arr[i - 1] + arr[i - 1];
//     }
//     int sum = 0,maximum = INT_MIN;
//     for (int i = 0; i < arr_size + 1; i++){
//         for (int j = 0; j < arr_size + 1; j++){
//             sum = cumm_arr[i] - cumm_arr[j];
//             maximum = max(sum, maximum);
//         }
//     }
//     cout << maximum << endl;
//     return 0;
// }

// Using Kadane's Algorithm
// int main(int argc, char const *argv[])
// {
//     int sum = 0, max_sum = INT_MIN;
//     for (int i = 0; i < arr_size; i++){
//         sum = sum + arr[i];
//         if(sum < 0)
//             sum = 0;
//         max_sum = max(max_sum, sum);
//     }
//     cout << max_sum << endl;
//     return 0;
// }


// Maximum sum of circular subarray

// int kadane(int arr[]){
//     int kadaneSum = 0,maxSum = INT_MIN;
//     for (int i = 0; i < arr_size; i++){
//         kadaneSum += arr[i];
//         if(kadaneSum < 0){
//             kadaneSum = 0;
//         }
//         maxSum = max(maxSum, kadaneSum);
//     }
//     return maxSum;
// }
// int main(int argc, char const *argv[])
// {
//     int wrapsum = 0;
//     int nonWrapsum = kadane(arr);
//     int TotalSum = 0;
//     for (int i = 0; i < arr_size; i++){
//         TotalSum += arr[i];
//         arr[i] = arr[i] * (-1);
//     }
//     wrapsum = TotalSum + kadane(arr);
//     cout << max(wrapsum, nonWrapsum) << endl;
//     return 0;
// }

// Matrix Multiplication

// int main(int argc, char const *argv[])
// {
//     int mat1[3][4] = {
//         {2, 4, 1, 2},
//         {8, 4, 3, 6},
//         {1, 7, 9, 5}};

//     int mat2[4][3] = {
//         {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}
//         };

//     cout << "Matrix Multiplication : \n";
//     int n1 = 3, n2 = 4, n3 = 3;
//     int ans[n1][n3];
//     for (int i = 0; i < n1; i++){
//         for (int j = 0; j < n3; j++){
//             ans[i][j] = 0;
//             for (int k = 0; k < n2; k++){
//                 ans[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }

//     for (int i = 0; i < n1; i++){
//         for (int j = 0; j < n3; j++){
//             cout << ans[i][j] << "  ";
//         }
//         cout << endl;
//     }

//         return 0;
// }

// Check Palindrome String

// int main(int argc, char const *argv[])
// {
//     string s;
//     cin >> s;
//     int n = s.size();
//     int flag = 1;
//     for (int i = 0; i < n; i++){
//         if(s[i] != s[n-1-i])
//           {
//               flag = 0;
//               break;
//           }
//     }
//     if(flag){
//           cout << "String is Palindrome" << endl;
//     }
//     else
//           cout << "String is not Palindrome" << endl;
//         return 0;
// }

// Lower Case to Uppercase and vice-versa

// int main(int argc, char const *argv[])
// {
//     string s;
//     cin >> s;
//     int n = s.size();
//     for (int i = 0; i < n; i++){
//         if(s[i] >= 'A' && s[i] <= 'Z'){
//             cout << s[i]<<" ";
//             s[i] = s[i] + 32;
//             cout << s[i] << " ";
//         }
//         else if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             cout << s[i] << " ";
//             s[i] = s[i] - 32;
//             cout << s[i] << " ";
//         }
//         else 
//         continue;
//     }
//     cout << s;
//     return 0;
// }

// Power of 2

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     if((n & n-1) == 0){
//         cout << "Power of 2";
//     }
//     else
//         cout << "Not Power of 2";
//     return 0;
// }

// Get Bit
// int getBit(int n,int pos){
//     return ((n & (1 << pos)) != 0);
// }

// int setBit(int n,int pos){
//     return (n | (1 << pos));
// }

// int updateBit(int n,int pos,int val){
//     //clear bit
//     int mask = ~(1 << pos);
//     n = (n & mask);
//     //set bit
//     return (n | (val << pos));
// }

// int main(int argc, char const *argv[])
// {
//     cout << getBit(5, 2) << endl;
//     cout<<setBit(5, 1);
//     cout<< updateBit(5, 2, 0) << endl;
//     return 0;
// }

// count no. of ones in binary number

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int count = 0;
// while(n > 0){
//         n = n & n - 1;
//         count++;
// }
// cout << count << endl;
// return 0;
// }

// Get 2 unique number

// int getBit(int n,int pos){
//     return ((n & (1 << pos)) != 0);
// }

// int main(int argc, char const *argv[])
// {
//     int arr[] = {4, 2, 1, 4, 2, 1, 5, 7};
//     int s = 8;
//     int xorSum = 0, temp_xorSum = 0;
//     for(int i = 0; i < s;i++){
//         xorSum = xorSum ^ arr[i];
//     }
//     temp_xorSum = xorSum;
//     int bit = 0, pos = 0;
//     while(bit != 1){
//         bit = xorSum & 1;
//         xorSum = xorSum >> 1;
//         pos++;
//     }
//     int dup_xor = 0;
//     for(int i = 0; i < 8; i++){
//         if(getBit(arr[i],pos-1) == 1){
//             dup_xor = dup_xor ^ arr[i];
//         }
//     }
//     cout << dup_xor << endl;
//     cout << (dup_xor ^ temp_xorSum) << endl;
//     return 0;
// }

// Prime no. using Sieve Erathouses 

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int prime[n + 1] = {0};
//     for (int i = 2; i <= n; i++){
//         if(prime[i] == 0){
//             for (int j = (i * i); j <= n; j+=i){
//                 prime[j] = 1;
//             }
//         }
//     }
//     for(int i = 1; i < n+1; i++){
//         if(prime[i] == 0)
//             cout << i << " ";
//     }
//         return 0;
// }

// Merge Sort

// void merge(int arr[],int l,int mid,int r){
//     int n1 = mid - l + 1;
//     int n2 = r - mid;
//     int arr1[n1], arr2[n2];
//     for(int i = 0; i < n1; i++)
//     {
//         arr1[i] = arr[l+i];
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         arr2[i] = arr[mid + 1 + i];
//     }
//     int k = l, i = 0, j = 0;
//     while(i < n1 && j < n2){
//         if (arr1[i] < arr2[j])
//         {
//             arr[k] = arr1[i];
//             k++;
//             i++;
//         }
//         if (arr2[j] < arr1[i])
//         {
//             arr[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     while(i < n1){
//         arr[k] = arr1[i];
//         k++;
//         i++;
//     }
//     while(j < n2){
//         arr[k] = arr2[j];
//         k++;
//         j++;
//     }
// }

// void mergeSort(int arr[],int l,int r){
//     if(l < r){
//         int mid = (l + r) / 2;
//         mergeSort(arr, l, mid);
//         mergeSort(arr, mid + 1, r);
//         merge(arr, l, mid, r);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     mergeSort(arr, 0, arr_size - 1);
//     Print_array(arr);
//     return 0;
// }

// quick sort

// void swap(int arr[],int a,int b){
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }

// int partition(int arr[],int l,int r){
//     int pivot = arr[r];
//     int i = l - 1, j = l;
//     for (int j = l; j < r; j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, r);
//     return i + 1;
// }

// void quickSort(int arr[],int l, int r){
//     if(l < r){
//         int pi = partition(arr, l, r);
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, r);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     quickSort(arr, 0, arr_size - 1);
//     Print_array(arr);
//     return 0;
// }

// Reversing a string

// int main(int argc, char const *argv[])
// {
//     stack<string> s;
//     string str = "Hello Harsh! What's Going on ?";
//     for (int i = 0; i < str.length(); i++){
//         string word = "";
//         while(str[i] != ' ' && i < str.length())
//         {
//             word = word + str[i];
//             i++;
//         }
//         s.push(word);
//     }
//     while(!s.empty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//         return 0;
// }

// Redundant Braces

// int main(int argc, char const *argv[])
// {
//     bool redundant = false;
//     string s;
//     cin >> s;
//     stack<char> st;
//     for (int i = 0; i < s.length(); i++){
//         if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
//             st.push(s[i]);
//         else if(s[i] == '(')
//             st.push(s[i]);
//         else if(s[i] == ')'){
//             if(st.top() == '(')
//             {
//                 redundant = true;
//                 break;
//             }
//             else{
//                 while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
//                 {
//                     st.pop();
//                 }
//                 st.pop();
//             }
//         }
//     }
//     if(redundant){
//         cout << "Redundant";
//     }
//     else
//         cout << "Not Redundant";
//         return 0;
// }

