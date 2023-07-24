#include <iostream>
#include <vector>
using namespace std;


// Memoization
// Time complexity : O(n) --> atmost n recursion calls will be done for other calls result will be stored it will take constant time O(1)
// Space Complexity : O(n) + O(n) --> Recursion call stack + vector space

// int fib(int n,vector<int> &dp){
//     // base case
//     if(n <= 1)
//         return n;
//    // if result of recursion is already stored return it
//     if (dp[n] != -1)
//         return dp[n];
//   // storing the result
//     return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n+1, -1);
//     cout << fib(n, dp);
//     return 0;
// }


// Tabulation
// Time Complexity : O(n)
// Space Complexity : O(n) --> vector space


// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n+1, -1);
//     // base case
//     dp[0] = 0;
//     dp[1] = 1;

//     for (int i = 2; i <= n; i++)
//         dp[i] = dp[i - 1] + dp[i - 2];
//     cout << dp[n];
//     return 0;
// }

// Space Optimization
// Time Complexity : O(n)
// Space Complexity : O(1)

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    int prev1 = 1;
    int prev2 = 0;
    for (int i = 2; i <= n; i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1;
    return 0;
}


