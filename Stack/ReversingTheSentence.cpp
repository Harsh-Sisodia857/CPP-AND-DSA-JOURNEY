#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "Hey How are You?";
    stack<string> st;
    for(int i = 0; i<s.length(); i++){
            string word = "";
        while(s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
            st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
