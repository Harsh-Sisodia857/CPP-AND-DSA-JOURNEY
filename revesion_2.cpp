#include <iostream>
#include <math.h>
using namespace std;
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return (num * factorial(num - 1));
}
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}
int kadane(int arr[], int n)
{
    int sum = 0, maxsum = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxsum = max(sum, maxsum);
    }
    return maxsum;
}
bool checkPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
        return true;
    }
}
int getBit(int n, int pos)
{
    return (n & (1 << pos));
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}
bool isPowerOfTwo(int n){
     if(n && !(n & n-1))
        return true;
    return false;
}
int numberOfOnes(int n){
    int count = 0;
    while(n){
        n = (n & n-1);
        count++;
    }
    return count;
}
void primeSieve(int n){
    int prime[n+1] = {0};
    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            for(int j = i*i ; j<=n; j += i){
                prime[j] = 1;
            }
        }
    }
    for(int i = 0; i<n; i++)
        if(prime[i] == 0)
            cout<<i<<" ";
}
void subset(int arr[],int n){
    for(int i = 0; i<(1<<n); i++){
        for(int j = 0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(int argc, char const *argv[])
{
    // 1) Reversing a number

    // int n,reverse=0;
    // cin>>n;
    // while(n != 0){
    //     reverse = reverse * 10 + (n % 10);
    //     n = n/10;
    // }
    // cout<<reverse;

    // 2) Fibonacci Series

    // int t1=0,t2=1,next_term;
    // int n;
    // cin>>n;
    // while(n != 0){
    //     cout<<t1<<" ";
    //     next_term = t1 + t2;
    //     t1 = t2;
    //     t2 = next_term;
    //     n = n -1;
    // }

    // 3) ncr Formula

    // int n,r,result;
    // cin>>n>>r;
    // result = (factorial(n)/(factorial(r) * factorial(n-r)));
    // cout<<(factorial(n)/(factorial(r) * factorial(n-r)));

    //    4) Prime or not

    // int prime;
    // bool flag = true;
    // cin>>prime;
    // for(int i = 2 ; i < prime; i++){
    //     if(prime % i == 0){
    //         flag = false;
    //         break;
    //     }
    // }
    // if (flag)
    //     cout<<"Number is Prime";
    // else
    //     cout<<"Number is Not Prime";

    // 5) Armstrong Number

    // int n,dig,count=0,sum = 0;
    // cin>>n;
    // dig = n;
    // while(dig != 0){
    //     dig = dig/10;
    //     count++;
    // }
    // int flag = count,dup_n = n;
    // while(flag != 0){
    //     sum += pow((n % 10),count);
    //     n = n / 10;
    //     flag--;
    // }
    // if (sum == dup_n)
    //     cout<<"Number is Armstrong";
    // else
    //     cout<<"Number is Not an Armstrong";

    // 6) Reversing a string

    // reverse("Harsh");

    //    7) Printing all subarray of an array
    // int arr[] = {4,5,23,5,21,9};
    // int i,j,k;
    // for(i = 0; i<6; i++){
    //     for(j=i ; j<6; j++){
    //         cout<<"[";
    //         for(k = i; k <= j; k++){
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<"]"<<endl;
    //     }
    // }

    // 8) Sum of all subarray

    // int arr[] = {4,5,23,5,21,9};
    // int i,j,k,sum = 0;
    // for(i = 0; i<6; i++){
    //     for(j=i ; j<6; j++){
    //         for(k = i; k <= j; k++){
    //             sum += arr[k];
    //         }
    //     }
    // }
    // cout<<sum;

    //   9)Longest Arithmetic subarray

    // int n, pd, ans = 2, curr = 2, i, j = 2;
    // int arr[n];
    // cin >> n;
    // for (i = 0; i < n; i++)
    //     cin >> arr[i];
    // pd = arr[1] - arr[0];
    // while (j < n)
    // {
    //     if (pd == (arr[j] - arr[j - 1]))
    //     {
    //         curr++;
    //     }
    //     else
    //     {
    //         pd = arr[j] - arr[j - 1];
    //         curr = 2;
    //     }
    //     ans = max(ans, curr);
    //     j++;
    // }
    // cout << ans << endl;

    // 10) Max. Subarray Sum

    // int arr[] = {4,5,-23,5,21,9};
    // int i,j,k,sum = 0,max_sum = INT16_MIN;
    // for(i = 0; i<6; i++){
    //     for(j=i ; j<6; j++){
    //         sum = 0;
    //         for(k = i; k <= j; k++){
    //             sum += arr[k];
    //         }
    //         if(sum > max_sum)
    //             max_sum = sum;
    //     }
    // }
    // cout<<max_sum;

    // 11) Cummulative Sum Approach

    // int arr[] = {4,5,-23,5,21,9},cumm_arr[7];
    // int i,j,sum = 0,max_sum = INT16_MIN;
    // cumm_arr[0] = 0;
    // for(i = 1; i<7; i++)
    //     cumm_arr[i] = cumm_arr[i-1] + arr[i-1];
    // for(i = 1; i<7; i++){
    //     sum = 0;
    //     for(j=0 ; j<i; j++){
    //         sum = cumm_arr[i] - cumm_arr[j];
    //         max_sum = max(max_sum,sum);
    //     }
    // }
    // cout<<"Maximum Sum of Subarray is: "<<max_sum;

    // 12) Kadane's Algorithm

    // int arr[] = {4,5,-23,5,21,9};
    // int i,j,sum = 0,max_sum = INT16_MIN;
    // for(i = 0; i<6; i++){
    //     sum += arr[i];
    //     if(sum < 0){
    //         sum = 0;
    //     }
    //     max_sum = max(sum,max_sum);
    // }
    // cout<<max_sum;

    // 13) Circular Subarray Sum

    // int arr[] = {4,-4,6,-6,10,-11,12};
    // int wrapsum,nonwrapsum,totalsum = 0;
    // wrapsum = kadane(arr,7);
    // for(int i = 0 ; i< 7; i++){
    //     totalsum += arr[i];
    //     arr[i] = -arr[i];
    // }
    // // nonwrapsum = totalsum - [-(kadane(arr,7))]; negative sign is applied because initially we change the sign of each element
    // nonwrapsum = totalsum + kadane(arr,7);
    // cout<<max(wrapsum,nonwrapsum);

    // 14) String is Palindrome or not

    // string s;
    // cin>>s;
    // int n = s.length(),flag = 1;
    // for(int i = 0 ; i<n; i++){
    //     if(s[i] != s[n-1-i]){
    //         flag = 0;
    //     }
    // }
    // if(flag)
    //     cout<<"String is Palindrome";
    // else
    //     cout<<"String is not palindrome";

    // 15) Maximum Length of A sentence

    //  int maxlen = 0,currlen = 0,n,i = 0;
    //  cin>>n;
    //  cin.ignore();
    //  char arr[n + 1];
    //  cin.getline(arr,n);
    //  cin.ignore();
    //  int st = 0,maxst = 0;
    //  while(1){
    //      if(arr[i] == ' ' || arr[i] == '\0')
    //       {
    //             if(currlen > maxlen){
    //                 maxlen = currlen;
    //             }
    //             currlen = 0;
    //       }
    //       else
    //         {
    //         currlen++;
    //         }

    //      if(arr[i] == '\0')
    //         break;
    //      i++;
    //  }
    //  cout<<maxlen;

    //  16) Converting Uppercase to Lowercase

    // string s = "CODE CHEF";
    // for(int i = 0; i< s.length(); i++)
    // {
    //     if(s[i] == ' ')
    //         continue;
    //     if(s[i] >= 'A' || s[i] <= 'Z'){
    //         s[i] += 32;
    //     }
    // }
    // cout<<s;

    // 17) Converting Lower Case to uppercase

    // string s = "code chef";
    // for(int i = 0; i< s.length(); i++)
    // {
    //     if(s[i] == ' ')
    //         continue;
    //     if(s[i] >= 'a' || s[i] <= 'b'){
    //         s[i] -= 32;
    //     }
    // }
    // cout<<s;

    // 18) Max. Repeated Character in a string

    // string s = "fkankefhanfsdkajffalhhhhhzzzzzzz";
    // int a[26], maximumChar = 0;
    // char maxi;
    // for (int i = 0; i < 26; i++)
    //     a[i] = 0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == ' ')
    //         continue;
    //     a[s[i] - 'a']++;
    // }

    // for (int i = 0; i < 26; i++)
    // {
    //     if (a[i] > maximumChar)
    //     {
    //         maximumChar = a[i];
    //         maxi = 'a' + i;
    //     }
    // }
    // cout<<maxi<<endl<<maximumChar;

    // 19) BIT Manipultion

    // cout<<getBit(7,3)<<endl;
    // cout<<setBit(7,3)<<endl;
    // cout<<clearBit(7,0)<<endl;
    // cout<<updateBit(7,0,0)<<endl;

    // 20) Printing Prime Till n

    // int n;
    // cout << "Enter a number till you want to print prime numbers : ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     if (checkPrime(i))
    //     {
    //         cout << i << " ";
    //     }
    // }
       
    //    21) Printing all Prime till n using erathosthenes

    // primeSieve(30);

       // 22) Power of 2 using bit manipuation

        // cout<<isPowerOfTwo(16);
       
    //    23) Count Number of Ones in the binary representation of a number 

        //    cout<<numberOfOnes(19);

        // 24) Subset of a set using Bit Manipulation 

        // int arr[] = {1,2,3,4};
        // subset(arr,4);
  
            

    return 0;
}
