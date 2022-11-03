#include <iostream>
#include <math.h>
#include <stack>
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
string InfixToPostfix(string s)
{
    stack<char> st;
    string Postfix = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            Postfix += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                Postfix += st.top();
                st.pop();
            }
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
                Postfix += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        Postfix += st.top();
        st.pop();
    }
    return Postfix;
}
int main(int argc, char const *argv[])
{
    // cout << InfixToPostfix("a+(b*c-(d/e^f)*g)*h");
        cout << InfixToPostfix("(a-b/c)*(a/k-l)");
    return 0;
}
