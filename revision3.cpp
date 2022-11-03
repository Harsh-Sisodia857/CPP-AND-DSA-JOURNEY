#include<iostream>
#include<math.h>
using namespace std;
void fibonacci(int);
void fibonacci(int n){
        int t1 = 0;
        int t2 = 1;
        int nextTerm;
        for(int i = 0 ; i < n; i++){
            cout<<t1<<"\t";
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        return;
    }

int factorial(int n){
        if(n == 2)
            return 2;
        return n * factorial(n-1);
    }

int numberOfDigit(int n){
    int count = 0;
    while(n){
        n = n / 10;
        count++;
    }
    return count;
}

void reverse(string s){
    if(s.length() == 0)
        return;
    else
    {
        string ros = s.substr(1);
        reverse(ros);
        cout<<s[0];
    }
}

    void replacePI(string s){
    
        if(s.length() == 0)
            return;
        else{
            if(s[0] == 'p' && s[1] == 'i'){
                cout<<"3.14";
                replacePI(s.substr(2));
            }
            else{
                cout<<s[0];
                replacePI(s.substr(1));
            }
        }
    }

int getBit(int n,int pos){
        return (((1<<pos) & n) != 0);
    }

int setBit(int n,int pos){
    return ((1<<pos) | n);
}

int clearBit(int n,int pos){
    return ((~(1<<pos)) & n);
}

int updateBit(int n,int pos,int value){
    return ((~(1<<pos) & n) | n);
}

bool isPowerOf2(int n){
    return (!(n & n-1));
}
int main(int argc, char const *argv[])
{   
    cout<<isPowerOf2(312);
    // Reversing a number

    // int n; 
    // cin >> n;
    // int reverse = 0;
    // while (n){
    //     reverse = reverse * 10 + (n % 10);
    //     n = n / 10;
    // }
    // cout<< reverse;

    // Prime Number

    // int n ; cin >> n;
    // bool flag = true;
    //     for(int j = 2; j < n; j++){
    //         if (n % j == 0){
    //             flag = false;
    //             break;
    //         }
    //         else
    //             continue;
    //     }
    // if (flag)
    //     cout<<"Prime";
    // else{
    //     cout<<"Not Prime";
    // }

    // Armstrong 

    // int n ; cin >> n;
    // int dup = n;
    // int digit = numberOfDigit(n);
    // int d,sum = 0;
    // while(n){
    //     d = n % 10;
    //     sum += pow(d,digit);
    //     n = n/10;
    // }
    // if (sum == dup)
    //     cout<< "Armstrong";
    // else
    //     cout<<"Not an Armstrong";

    // Revering a string 

    // reverse("Harsh");

    // pipipppiipi ===> 3.143.14pp3.14i3.14
    // replacePI("pipipppiipi");


    // int arr[] = {2,4,12,5,1,56};
    // selection sort 

    // for(int i = 0; i < 5; i++){
    //     for(int j = i+1; j < 5; j++){
    //         if(arr[i] > arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }

    // insertion sort 

    // for(int i = 1; i < 6; i++){
    //     int current = arr[i];
    //     int j = i - 1;
    //     while(arr[j] > current && j>=0){
    //         arr[j+1] = arr[j];
    //         j--;
    //     }
    //     arr[j+1] = current;
    // }

    // Bubble Sort

    // for(int round = 0; round < 5; round++)
    // {
    //     for(int j = 0 ; j < 5 - round; j++)
    //     {
    //         if(arr[j] > arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }       
    // }
    // for(int i = 0; i<6; i++)
    //     cout<<arr[i]<<" ";

    //maximum subarray sum 
    // 1) Brute Force Approach 
    // int n,i,j,k;
    // cin>>n;
    // int maxSum = INT16_MIN;
    // int arr[n];
    // int sum = 0;
    // for(int i = 0; i<n; i++)
        // cin>>arr[i];
    // for(i = 0; i < n; i++){
    //     for(j = 0; j <n; j++){
    //         sum = 0;
    //         for(k = i; k <= j; k++){
    //             sum += arr[k];
    //         }
    //         maxSum = max(maxSum,sum);
    //     }
    // }
    //     cout<<maxSum;

    // 2) Cummulative Sum Approach 

    // int cumm_arr[n+1];
    // cumm_arr[0] = 0;
    // for(i = 1; i <= n; i++){
    //     cumm_arr[i] = cumm_arr[i-1] + arr[i-1];
    // } 
    // for(i = 1; i<=4; i++){
    //     sum = 0;
    //     for(j = 0; j < i; j++){
    //         sum = cumm_arr[i] - cumm_arr[j];
    //         maxSum = max(maxSum,sum);
    //     }
    // }
    // cout<<"Maximum Sum of Subarray is : "<<maxSum;

    // 3)Kadane's Algo

    // int n,i; cin>>n;
    // int maxSum = INT16_MIN;
    // int arr[n];
    // int sum = 0;
    // for(i = 0; i<n; i++){
    //     cin>>arr[i];
    //     sum += arr[i];
    //     if(sum < 0)
    //         sum = 0; 
    //     maxSum = max(maxSum,sum);
    // }
    // cout<<maxSum;


    return 0;
}
