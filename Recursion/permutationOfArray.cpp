#include <bits/stdc++.h>
using namespace std;

void makeCombinations(vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, map<int, bool> &marking)
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (marking[i] == false)
        {
            marking[i] = true;
            ds.push_back(nums[i]);
            makeCombinations(nums, ds, ans, marking);
            ds.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> ds;
    vector<vector<int>> ans;
    map<int, bool> marking;
    for (int i = 0; i < nums.size(); i++)
    {
        marking[i] = false;
    }
    makeCombinations(nums, ds, ans, marking);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    permute(nums);
    return 0;
}