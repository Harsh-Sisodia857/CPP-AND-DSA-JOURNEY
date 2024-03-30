#include<bits/stdc++.h>
using namespace std;

void Sequence(int idx,vector<int> &ds,int arr[],int n,int sum,int k){
    if(idx == n){
        if(sum == k){
            for(auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    sum = sum + arr[idx];
    Sequence(idx+1, ds, arr, n, sum, k);
    ds.pop_back();
    sum = sum - arr[idx];
    Sequence(idx+1, ds, arr, n, sum, k);
}

int main()
  {
      int arr[] = {3, 1, 2};
      vector<int> ds;
      Sequence(0, ds, arr, 3,0,4);
      return 0;
  }