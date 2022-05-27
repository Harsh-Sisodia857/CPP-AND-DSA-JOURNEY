#include<iostream>
using namespace std;
class queue{
    int *arr;
    int front;
    int rear;
    int n;
    public:
    queue(int size){
        arr = new int[size];
        front = -1;
        rear = -1;
        n = size;
    }
    void enqueue(int val){
        if(rear == n-1){
            cout<<"Overflow"<<endl;
            return;
        }
        rear++;
        arr[rear] = val;
        if(front == -1)
            front++;
    }
    void dequeue(){
        if(front == -1 || front > rear)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front > rear)
        {
            cout<<"Underflow"<<endl;
            return -1;
        }
        return arr[front];
    }
};
int main(int argc, char const *argv[])
{   
    queue q(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    q.peek();
    return 0;
}
