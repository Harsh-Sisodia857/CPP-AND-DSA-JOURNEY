#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> solveNQueens(int n);

void placeQueen(int col, vector<vector<string>> &ans, vector<string> &board, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (leftRow[row] == 0 && upperDiagonal[n - 1 + col - row] == 0 && lowerDiagonal[row + col] == 0)
        {
            board[row][col] = 'Q';
            leftRow[row] = 1;
            upperDiagonal[n - 1 + col - row] = 1;
            lowerDiagonal[row + col] = 1;
            placeQueen(col + 1, ans, board, leftRow, upperDiagonal, lowerDiagonal, n);
            board[row][col] = '.';
            leftRow[row] = 0;
            upperDiagonal[n - 1 + col - row] = 0;
            lowerDiagonal[row + col] = 0;
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1,0), lowerDiagonal(2 * n - 1,0);
    placeQueen(0, ans, board, leftRow, upperDiagonal, lowerDiagonal, n);
    return ans;
}
int main()
  {
      vector<vector<string>> v = solveNQueens(4);
      
      return 0;
  }