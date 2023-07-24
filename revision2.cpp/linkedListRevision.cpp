#include<bits/stdc++.h>
using namespace std;

class node{
    public :
        int data;
        node *next;

        node(int val){
            data = val;
            next = NULL;
        }
};

node *head = NULL,*p;

void multiple_node(int n){
        for (int i = 0; i < n; i++){
            cout << "Enter data item " << i + 1 << " :";
            int node_data;
            cin >> node_data;
            node *new_node = new node(node_data);
            if(head == NULL){
                head = new_node;
                p = new_node;
            }
            else{
                p->next = new_node;
                p = new_node;
            }
        }
}

void display(node *head){
    if(head == NULL){
            cout << "Linked list is empty";
            return;
    }
    else{
            node *traverse = head;
            while(traverse != NULL){
                cout << traverse->data << "->";
                traverse = traverse->next;
            }
            cout << "NULL" << endl;
    }
}

void insertAtStart(){
    int val;
    cin >> val;
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}

void insertNode(){
    int val,pos;
    cout << "On which position you want to insert : ";
    cin >> pos;
    cout << "Value to be inserted : ";
    cin >> val;
    node *t = new node(val);
    node *traverse = head,*p;
    while(pos){
            p = traverse;
            traverse = traverse->next;
            pos--;
    }
    p->next = t;
    t->next = traverse;
}

void deleteFirst(){
    node *d = head;
    head = head->next;
    free(d);
}

// Reversing Linked List

node* reverse(node *head)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;
    while (currentptr != NULL)
    {
            nextptr = currentptr->next;
            currentptr->next = prevptr;
            prevptr = currentptr;
            currentptr = nextptr;
    }
    head = prevptr;
    return head;
}

node* reverseRecursively(node *head){
    if(head == NULL || head->next == NULL){
            return head;
    }
    node *temphead = reverseRecursively(head->next);
    head->next->next = head;
    head->next = NULL;
    return temphead;
}

void makeCycle(node *head, int pos)
{
    node *cycle, *lastNode = head;
    int count = 1;
    while (lastNode->next != NULL)
    {
            if (count == pos)
            {
                cycle = lastNode;
            }
            lastNode = lastNode->next;
            count++;
    }
    lastNode->next = cycle;
}

// detect cycle

bool FloydAlgoToDetectCycle(node* &head){
    node *tortoise = head;
    node *hare = head;
    while(hare->next != NULL && hare != NULL){
            tortoise = tortoise->next;
            hare = hare->next->next;
            if(hare == tortoise){
                return true;
            }
    }
    return false;
}

void removeCycle(node* &head){
    node *hare = head;
    node *tortoise = head;
    while(hare != NULL && hare->next != NULL){
            hare = hare->next->next;
            tortoise = tortoise->next;
            if (hare == tortoise)
            {
                break;
            }           
    }
    hare = head;
    while(hare->next != tortoise->next){
            hare = hare->next;
            tortoise = tortoise->next;
    }
    tortoise->next = NULL;
}

    int
    main()
{
int n;
cout << "How many node you want to be inserted in Linked List : ";
cin >> n;
multiple_node(n);
display(head);
// display(head);
// insertNode();
// node *newhead = reverseRecursively(head);
// display(newhead);
makeCycle(head, 3);
if(FloydAlgoToDetectCycle(head)){
     cout << "Cycle is Present" << endl;
     cout << "Removing Cycle \n";
     removeCycle(head);
     display(head);
}
else{
    cout << "Cycle is Not Present" << endl;
}
return 0;
}
