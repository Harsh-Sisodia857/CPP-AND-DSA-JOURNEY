#include<iostream>
#include<deque>
using namespace std;
int main(int argc, char const *argv[])
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    for(auto i : dq)
        cout<<i<<" ";
    dq.pop_back();
    cout<<"/n";
    for(auto i : dq)
        cout<<i<<" ";
    return 0;
}
