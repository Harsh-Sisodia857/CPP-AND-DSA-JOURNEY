#include <iostream>
#include <queue>
using namespace std;
class stack
{
    int n;
    queue<int> q1;
    queue<int> q2;

public:
    stack()
    {
        n = 0;
    }
    void push(int x)
    {
        q2.push(x);
        n++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        if (q1.empty())
            return;
        q1.pop();
        n--;
    }
    int top()
    {
        if (q1.empty())
            return -1;
        int Top = q1.front();
        return Top;
    }
};
int main(int argc, char const *argv[])
{
    stack s;
    s.push(1);
    s.push(2);
    cout << s.top() << endl;
    s.push(3);
    cout << s.top() << endl;
    s.push(4);
    cout << s.top() << endl;
    s.pop();
    s.pop();
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}
