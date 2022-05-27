#include<iostream>
using namespace std;
class stack{
    int* arr;
    int top;
    int n;
    public:
    stack(int num){
        arr = new int[num];
        top = -1;
        n = num;
    }
    void push(int x)
    {   
        if(top == n-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"No Elements to Pop"<<endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if(top == -1)
        {
            cout<<"No Elements to Pop"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return arr[top] == -1;
    }
};
int main(int argc, char const *argv[])
{
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.empty();
    return 0;
}
