#include <iostream>
#include <vector>
using namespace std;

bool printS(int idx, vector<int> &ds, int arr[], int n, int sum, int k)
{
    if (idx == n)
    {
        // printing the subsequence
        if (sum == k)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[idx]);
    sum += arr[idx];
    if(printS(idx + 1, ds, arr, n, sum, k) == true)
        return true;
    // not pick or not take condition, this element is not added in your subsequence
    ds.pop_back();
    sum -= arr[idx];
    if(printS(idx + 1, ds, arr, n, sum, k) == true)
        return true;

    return false;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 1, 2};
    int n = 3, k = 2;
    int sum = 0;
    vector<int> ds;
    printS(0, ds, arr, n, sum, k);
    return 0;
}
