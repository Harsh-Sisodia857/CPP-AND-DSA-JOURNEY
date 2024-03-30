#include<bits/stdc++.h>
using namespace std;
int d = 30;
int mod = 1e9 + 7;
int distinctString(vector<string> s)
{
    sort(s.begin(), s.end());
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(i == 0 || s[i] != s[i-1]){
            count++;
        }
    }
    return count;
}

long long calculateHash(string s, vector<long long> power)
{
    long long hash = 0;
    for (int i = 0; i < s.length(); i++){
        hash = hash + (s[i] - 'a' + 1) * power[i];
    }
    return hash;
}

int main()
  {
    vector<string> s = {"ab", "ac", "de", "edfd", "ab", "cd", "hjh"};
    // cout << distinctString(s);
    int n = s.size();
    vector<long long> power(n);
    power[0] = 1;
    for(int i = 1; i < n; i++){
        power[i] = (power[i - 1] * d) % mod;
    }
    int count = 0;
    set<long long> st;
    for (auto it : s)
    {
        st.insert(calculateHash(it,power));
    }
    cout << st.size();
    return 0;
  }