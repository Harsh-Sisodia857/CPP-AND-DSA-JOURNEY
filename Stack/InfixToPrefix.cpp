#include <iostream>
#include <math.h>
#include <stack>
#include<algorithm>
using namespace std;
int prec(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string InfixToPrefix(string s)
{
    stack<char> st;
    string Prefix = "";
    for (int i = s.length(); i>0; i--)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            Prefix += s[i];
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                Prefix += st.top();
                st.pop();
            }
            // Removing opening bracket from stack
            if (!st.empty())
            {
                st.pop();
            }
        }
        // if operator comes from string
        else
        {   
            while (!st.empty() && prec(st.top()) >= prec(s[i]))
            {
                Prefix += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        Prefix += st.top();
        st.pop();
    }
    reverse(Prefix.begin(),Prefix.end());
    return Prefix;
}
int main(int argc, char const *argv[])
{
    cout << InfixToPrefix("(a-b/c)*(a/k-l)");
    return 0;
}
