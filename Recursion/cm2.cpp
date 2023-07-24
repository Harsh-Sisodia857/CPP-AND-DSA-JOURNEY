class Solution
{
public:
    void findCombinations(int idx, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        
        for (int i = idx; i < arr.size(); i++)
        {
            if ((arr[i] == arr[i - 1]) && (i > idx))
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            findCombinations(i + 1, target - arr[i], arr, ds, ans);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, target, candidates, ds, ans);
        return ans;
    }
};