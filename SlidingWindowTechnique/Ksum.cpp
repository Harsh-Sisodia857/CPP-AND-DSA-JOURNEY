#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the value of n and k : ";
    cin >> n >> k;
    int arr[n];
    cout << "Enter the no. of Items: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0, ans = INT_MAX;
    for (int i = 0; i < k; i++)
        sum += arr[i];
    ans = min(ans, sum);
    for (int i = 1; i < n - k + 1; i++)
    {
        sum = sum - arr[i - 1];
        sum = sum + arr[i + k - 1];
        ans = min(ans, sum);
    }
    cout << "answer is :";
    cout << ans << endl;
    return 0;
}