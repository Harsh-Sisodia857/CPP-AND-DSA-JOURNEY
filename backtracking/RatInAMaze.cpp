#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<bool>> &vis, vector<vector<int>> &arr, int n, int newX, int newY)
{
    if ((newY < n && newY >= 0) && (newX < n && newX >= 0) &&
        vis[newX][newY] != 1 && arr[newX][newY] == 1)
        return true;
    return false;
}

void solve(int x, int y, vector<vector<int>> &arr, int n,
           vector<vector<bool>> &vis, vector<string> &ans, string path)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
    }
    // 4 move
    // D U L R

    // DOWN
    if (isSafe(vis, arr, n, x + 1, y))
    {
        vis[x][y] = 1;
        solve(x + 1, y, arr, n, vis, ans, path + 'D');
        vis[x][y] = 0;
    }

    // LEFT
    if (isSafe(vis, arr, n, x, y - 1))
    {
        vis[x][y] = 1;
        solve(x, y - 1, arr, n, vis, ans, path + 'L');
        vis[x][y] = 0;
    }

    // RIGHT
    if (isSafe(vis, arr, n, x, y + 1))
    {
        vis[x][y] = 1;
        solve(x, y + 1, arr, n, vis, ans, path + 'R');
        vis[x][y] = 0;
    }

    // UP
    if (isSafe(vis, arr, n, x - 1, y))
    {
        vis[x][y] = 1;
        solve(x - 1, y, arr, n, vis, ans, path + 'U');
        vis[x][y] = 0;
    }
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    vector<vector<bool>> vis(n, vector<bool>(n, 0));
    vector<string> ans;
    string path = "";
    if (arr[0][0] == 0)
        return ans;

    solve(0, 0, arr, n, vis, ans, path);

    return ans;
}