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
node *head1 = NULL,*head2 = NULL,*p;
void multiple_node(node* &head,int n)
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
        cout << "Linked List is Empty" << endl;
        return;
    }
    else
    {
        node *traverse = head;
        while (traverse != NULL)
        {
            cout << traverse->data << "->";
            traverse = traverse->next;
        }
        cout << "NULL" << endl;
    }
}
node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *merge = new node(-1);
    node *p3 = merge;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return merge->next;
}
int main(int argc, char const *argv[])
{
    multiple_node(head1,4);
    viewLinkedList(head1);
    multiple_node(head2,3);
    viewLinkedList(head2);
    node *dummyhead = merge(head1,head2);
    viewLinkedList(dummyhead);
    return 0;
}
