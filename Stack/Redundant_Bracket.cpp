#include<iostream>
#include<stack>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    stack<char> st;
    bool ans = false;
    for(int i = 0; i<s.size();i++)
    {
        if(s[i] == '(')
            st.push(s[i]);
        else if (s[i] == '+'|| s[i] == '-'|| s[i] == '*'|| s[i] == '/')
            st.push(s[i]);
        else if (s[i] == ')'){   
            if(st.top() == '(')
            {
                ans = true;
            }
            while (st.empty() || st.top() == '+'|| st.top() == '-'|| st.top() == '*'|| st.top() == '/')
            {
                st.pop();
            }
                st.pop();
        }
        else
            continue;
    }
    if(ans == true)
       cout<<"Redundant Braces Found"<<endl;
    else
        cout<<"Redundant Braces Not Found"<<endl;

    return 0;
}

