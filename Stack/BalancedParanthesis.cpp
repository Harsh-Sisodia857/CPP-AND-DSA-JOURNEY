#include <iostream>
#include <stack>
using namespace std;
bool isvalid(string s)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            st.push(s[i]);
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else
        {
            ans = false;
            break;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    string parenthesis = "({[}])";
    if (isvalid(parenthesis))
        cout << "Balanced Parenthesis" << endl;
    else
        cout << "Unbalanced Parenthesis";
    return 0;
}
