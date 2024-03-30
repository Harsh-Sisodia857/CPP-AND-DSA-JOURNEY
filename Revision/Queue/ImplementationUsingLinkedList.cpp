#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node *next;
  node(int val){
    data = val;
    next = NULL;
  }
};

class queue{
  public:
  node *front;
  node *rear;
  queue(){
    front = NULL;
    rear = NULL;
  }
  void dequeue(){
    if(front == NULL){
      cout << "Queue is Empty" << endl;
      return;
    }
    front = front->next;
  }
  void enqueue(int val){
    node* n = new node(val);
    if(rear == NULL){
      rear = n;
      front = n;
      return;
    }
    rear->next = n;
    rear = n;
  }
  void empty(){
    if(front == NULL || front > rear){
      cout << "Queue is Empty";
      return;
    }
    cout << "Queue is not empty";
  }
  int peek(){
    if(front > rear || front == NULL){
      return -1;
    }
    return front->data;
  }
};

int main()
  {
  queue q;
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(8);
  cout << q.peek() << endl;
  q.dequeue();
  cout << q.peek();
  return 0;
  }