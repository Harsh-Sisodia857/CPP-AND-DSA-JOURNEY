#include<bits/stdc++.h>
using namespace std;

void print(int n,int count){
    if(count == n)
        return;
    print(n, ++count);
    cout << "Harsh" << endl;
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

// reversing array

void reverse(int arr[],int l,int r){
    if(l >= r)
        return;
    swap(arr[l], arr[r]);
    reverse(arr, l + 1, r - 1);
}

// palindrome using recursion

void palindrome(string s,int size,int i,int &flag){
    if(i >= size/2)
        return;
    if(s[i] != s[size - i - 1])
        {
        flag = 0;
        return;
        }
}

// printing all subsequence

void subsequence(int arr[], vector<int> &ans, vector<int> &ds, int idx, int n)
{
        if (idx == n)
        {
        for (auto i : ds)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
        }
        ds.push_back(arr[idx]);
        subsequence(arr, ans, ds, idx + 1, n);

        ds.pop_back();
        subsequence(arr, ans, ds, idx + 1, n);
}

// printing all subsequence with sum k

void subsequenceSum(int arr[], vector<int> &ds, int k, int n, int sum, int idx)
{

        if (idx == n)
        {
        if (sum == k)
        {
            for (auto i : ds)
                cout << i << " ";
            cout << endl;
        }
        return;
        }

        ds.push_back(arr[idx]);
        sum += arr[idx];
        subsequenceSum(arr, ds, k, n, sum, idx);

        ds.pop_back();
        sum -= arr[idx];
        subsequenceSum(arr, ds, k, n, sum, idx);
}

int main()
  {
    //   print(3, 0);
    int arr[] = {2, 4, 5,3};
    // reverse(arr, 0, 4);
    // for (int i = 0; i <= 4; i++)
    //     cout << arr[i] << " ";

    // int flag = 1;
    // palindrome("Harsh", 5, 0, flag);
    // cout << flag << endl;

    // all subsequence

    // subsequence(arr, ans, 0, 3);
    // for(auto i : ans)
    //     cout << i << " ";

    // subsequence with sum k
    vector<int> ans;
    subsequenceSum(arr, ans, 7, 4, 0, 0);

    return 0;
  }