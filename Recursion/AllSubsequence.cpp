#include <iostream>
#include <vector>
using namespace std;

void printF(int idx,vector<int> &ds,int arr[],int n){
    if(idx == n){
        for(auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[idx]);
    printF(idx + 1, ds, arr, n);
    // not pick or not take condition, this element is not added in your subsequence
    ds.pop_back();
    printF(idx + 1, ds, arr, n);
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printF(0, ds, arr, n);
    return 0;
}
