#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> s1;
    stack<int> s2;
    public:
    void enqueue(int x){
        s1.push(x);
    }
    int dequeue(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ans = s2.top();
        s2.pop();
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(24);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    return 0;
}
