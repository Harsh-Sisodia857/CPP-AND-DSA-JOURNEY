#include <bits/stdc++.h>
using namespace std;

int kSmallestElement(int arr[], int l, int r, int k)
{
    priority_queue<int,vector<int>> pq;
    // step 1 : 
    for (int i = 0; i < k; i++)
        pq.push(arr[i]);
    // step 2 :
    for (int i = k; i <= r; i++){
        if(pq.top() > arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    // step 3 :
    return pq.top();
}

int main()
{
    int arr[] = {-1, 85, 6, 72, 1};
    cout << kSmallestElement(arr, 0, 4, 3);
    return 0;
}