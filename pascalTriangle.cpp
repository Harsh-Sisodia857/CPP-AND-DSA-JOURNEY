#include <iostream>
using namespace std;
int fact(int n)
{
        int factorial = 1;
        if (n == 0 || n == 1)
            return 1;
        for (int i = 2; i <= n; i++)
            factorial *= i;
        return factorial;
}
int ncr(int n, int r)
{
    int res = fact(n) / (fact(n - r) * fact(r));
    return res;
}
int main(int argc, char const *argv[])
{
    int i, j, row;
    cin >> row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << "\n";
    }
    return 0;
}
