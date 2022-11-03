#include <iostream>
#include <set>
using namespace std;

int F(int arr[], int startIndex, int endIndex)
{
    set<int> s;
    for (int i = startIndex; i <= endIndex; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}

string partition(int arr[], int n)
{
    if (n == 2)
        return "YES";
    int mid = n / 2;
    while (mid > 0 && mid < n-1)
    {
        int s = F(arr, 0, mid);
        int e = F(arr, mid + 1, n-1);
        if (s == e)
            return "YES";
        mid--;
    }
    mid = n/2;
    while(mid < n-1)
    {  
       int s = F(arr, 0,mid);
        int e = F(arr, mid + 1, n-1);
        if (s == e)
            return "YES";
        mid++; 
    }
    return "NO";
}

int main()
{
    // your code goes here
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << partition(arr, n) << endl;
    }
    return 0;
}
