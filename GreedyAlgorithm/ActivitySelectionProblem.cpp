#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), [](vector<int> &a, vector<int> &b)
         { return a[1] < b[1]; });
    // The first activity always gets selected
    int take = 1;
    int end = v[0][1];
    // Consider rest of the activities
    for (int i = 1; i < n; i++)
    {
        // If this activity has start time greater than or
        // equal to the finish time of previously selected
        // activity, then select it
        if (v[i][0] >= end)
        {
            take++;
            end = v[i][1];
        }
    }
    cout << take << endl;
    return 0;
}
