#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int val = st.top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(val);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, ele);
}

void print(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    print(st);
    reverseStack(st);
    cout << endl;
    print(st);
    return 0;
}