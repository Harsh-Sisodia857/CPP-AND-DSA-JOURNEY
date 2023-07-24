#include <iostream>
#include <vector>
using namespace std;

int printS(int idx,int arr[], int n, int sum, int k)
{
    if (idx == n)
    {
        // printing the subsequence
        if (sum == k)
        {
            return 1;
        }
        return 0;
    }
    sum += arr[idx];
    // pick
    int l = printS(idx + 1, arr, n, sum, k);
    sum -= arr[idx];
    // not pick
    int r = printS(idx + 1,arr, n, sum, k);

    return l + r;

}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 1, 2};
    int n = 3, k = 2;
    int sum = 0;
    cout<<printS(0, arr, n, sum, k);
    return 0;
}
