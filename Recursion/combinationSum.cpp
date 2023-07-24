// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.
// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input
#include <bits/stdc++.h>
using namespace std;


void printCombinations(int idx, vector<int> &candidates, vector<int> &ds, int target, int n, vector<vector<int>> &ans)
{
    if (idx == n)
    {
        if (target == 0)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
            ans.push_back(ds);
        }
        return;
    }
    if (candidates[idx] <= target)
    {
        // picking the element
        ds.push_back(candidates[idx]);
        printCombinations(idx, candidates, ds, target - candidates[idx], n, ans);
        ds.pop_back();
    }
    printCombinations(idx + 1, candidates, ds, target, n, ans);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    int n = candidates.size();
    vector<int> ds;
    vector<vector<int>> ans;
    printCombinations(0, candidates, ds, target, n, ans);
    return ans;
}


int main()
  {
      vector<int> candidates;
      candidates.push_back(2);
      candidates.push_back(3);
      candidates.push_back(6);
      candidates.push_back(7);
      int target = 7;
      vector<vector<int>> combinations = combinationSum(candidates, target);
      return 0;
  }