#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
   { 
    int n, count = 0;
    string s1, s2;
    cin >> n >> s1 >> s2;
    map<char, int> s1Count, s2Count;
    for (char i : s1)
        s1Count[i]++;
    for (char i : s2)
        s2Count[i]++;
    for (char i = 'a'; i <= 'z'; i++)
        count = max(count, min(s1Count[i], s2Count[i]));
    cout << count << endl;
    }
}