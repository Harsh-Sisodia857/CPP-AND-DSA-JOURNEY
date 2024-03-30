#include<bits/stdc++.h>
using namespace std;

void printF(int idx,vector<int> &ds,int arr[],int n){
    if(idx == n){
        for(auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    //pick
    ds.push_back(arr[idx]);
    printF(idx + 1, ds, arr, n);
    //not pick
    ds.pop_back();
    printF(idx + 1, ds, arr, n);
    return;
}

int main()
  {
      int arr[] = {4, 1, 2};
      int n = 3;
      vector<int> ds;
      printF(0, ds, arr, n);
      return 0;
  }