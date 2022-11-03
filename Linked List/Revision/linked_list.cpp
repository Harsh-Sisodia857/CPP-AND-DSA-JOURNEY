#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *p;
node *head = NULL;

void multiple_node(int n)
{
    for (int i = 0; i < n; i++)
    {
        int val;
        // cout << "Enter " << i + 1 << " data item : ";
        cin >> val;
        node *temp = new node(val);
        if (head == NULL)
        {
            head = temp;
            p = temp;
        }
        else
        {
            p->next = temp;
            p = temp;
        }
    }
}

void viewLinkedList(node *head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

void deleteNode(node* &head)
{
    int target; 
    cout<<endl<<"Enter the node number to be deleted:";
    cin>>target;

    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;
        return;
    }
    node *temp = head, *p = head;
    if(target == 1){
        cout<<head->data<<endl;
        head = head->next;
        cout<<head->data<<endl;
        return;
    }
    int count = 0;
    while (temp != NULL)
    {   

        count++;
        if (count == target)
        {
            p->next = p->next->next;
            delete temp;
            break;
        }
        p = temp;
        temp = temp->next;
    }
}

// REVERSING THE LINKED LIST 

node *reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

//MAKING CYCLE IN A LINKED LIST

// void makeCycle(node *head,int pos){
//     node *temp = head,*cycle;
//     int count = 1;
//     while (temp != NULL)
//     {   
//         if(count == pos){
//             cycle = temp;
//         }
//         count++;
//         temp= temp->next;
//     }
//     temp->next = cycle;
// }

void makeCycle(node *head,int pos){
    node *cycle,*lastNode = head;
    int count = 1;
    while(lastNode->next != NULL)
    {
        if(count == pos)
        {
            cycle = lastNode;
        }
        lastNode = lastNode->next;
        count++;
    }
    lastNode->next = cycle;
}

int main(int argc, char const *argv[])
{
    multiple_node(4);
    viewLinkedList(head);
    makeCycle(head,3);
    viewLinkedList(head);
    // deleteNode(head);
    // node *newhead = reverse(head);
    // viewLinkedList(newhead);
    return 0;
}
