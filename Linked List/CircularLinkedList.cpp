#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // Making parameterized Constructor
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
node *head = NULL, *p;
void multiple_node(int n)
{
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter a data item " << i + 1 << ": ";
        cin >> data;
        node *temp = new node(data);
        if (head == NULL)
        {
            head = temp;
            p = temp;
            temp->next = temp;
        }
        else
        {
            p->next = temp;
            p = temp;
            temp->next = head;
        }
    }
}
void viewLinkedList(node *head)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;
        return;
    }
    else
    {
        node *traverse = head;
        do
        {
            cout<<traverse->data<<" ";
            traverse = traverse->next;
        } while (traverse != head);
    }
}
void InsertAtStart(node* &head,int val)
{   
     node *new_node = new node(val);
     if(head == NULL)
     {
         head = new_node;
         return;
     }
     node *traverse = head;
        do
        {
            traverse = traverse->next;
        } while (traverse->next != head);
    new_node->next = head;
    traverse->next = new_node;
    head = new_node;
}
void InsertAtEnd(node* &head,int val)
{
    node *new_node = new node(val);
     node *traverse = head;
        do
        {
            traverse = traverse->next;
        } while (traverse->next != head);
    new_node->next = head;
    traverse->next = new_node;
}
void deleteAtHead(node* &head)
{
    node *toDelete = head,*traverse = head;
     do
        {
            traverse = traverse->next;
        } while (traverse->next != head);
    head = head->next;
    traverse->next = head;
    delete toDelete;
}
void Delete(node* &head,int pos)
{   
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    int count = 1;
    node *traverse = head,*toDelete;
    while (count != pos-1)
    {
        traverse = traverse->next;
        count++;
    }
    toDelete = traverse->next;
    delete toDelete;
    traverse->next = traverse->next->next;
}
void InsertAtMid(node* &head,int pos,int value)
{
    node *traverse = head;
    int count = 1;
    while (count != pos-1)  
    {
        traverse = traverse->next;
        count++;
    }
    node *new_node = new node(value);
    new_node->next = traverse->next;
    traverse->next = new_node;
    
}
int main(int argc, char const *argv[])
{
    multiple_node(4);
    viewLinkedList(head);
    // InsertAtEnd(head,9);
    // viewLinkedList(head);
    // InsertAtStart(head,89);
    // viewLinkedList(head);
    // Delete(head,1);
    InsertAtMid(head,3,69);
    viewLinkedList(head);
    return 0;
}
