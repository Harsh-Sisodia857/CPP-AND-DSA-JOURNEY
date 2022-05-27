#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
node *head = NULL, *p;
void CreateDoublyLinkedList(node *&head, int n)
{
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter data Item " << i + 1 << " :";
        cin >> data;
        node *temp = new node(data);
        if (head == NULL)
        {
            head = temp;
            p = temp;
        }
        else
        {
            p->next = temp;
            temp->prev = p;
            p = temp;
        }
    }
}
void printDoublyLinkedList(node *&head)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;
        return;
    }
    else
    {
        node *print = head;
        while (print != NULL)
        {
            cout << print->data << " ";
            print = print->next;
        }
    }
}
void InsertAtStart(node *&head)
{
    int data;
    cout<<endl<< "Enter data Item to be Inserted at starting :";
    cin >> data;
    node *new_node = new node(data);
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void InsertAtEnd(node *&head)
{
    int data;
    cout<<endl<<"Enter data Item to be Inserted at Ending :";
    cin >> data;
    node *new_node = new node(data);
    if(head == NULL)
    {
        head = new_node;
        return;
    }
    node *lastNode = head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }
    lastNode->next = new_node;
    new_node->prev = lastNode;
}
int main(int argc, char const *argv[])
{
    CreateDoublyLinkedList(head, 5);
    printDoublyLinkedList(head);
    InsertAtEnd(head);
    printDoublyLinkedList(head);
    InsertAtStart(head);
    printDoublyLinkedList(head);

    return 0;
}
