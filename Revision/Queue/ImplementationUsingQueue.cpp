#include<iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int n;
    int front;
    int rear;
    queue(int size){
        arr = new int[size];
        front = -1;
        rear = -1;
        n = size;
    }
    void enqueue(int data){
        if(rear == n-1){
            cout << "Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = data;
        if(front == -1){
            front++;
        }
    }
    void dequeue(){
        if(front == -1 || front > rear){
            cout << "Queue Overflow" << endl;
            return;
        }
        front++;
    }
    int peek(){
        if (front == -1 || front > rear)
        {
            cout << "Underflow" << endl;
            return -1;
        }
        return arr[front];
    }
    void empty(){
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }
    }
};

int main()
{
    queue q(3);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(3);
    q.dequeue();
    cout << q.peek();
    return 0;
}