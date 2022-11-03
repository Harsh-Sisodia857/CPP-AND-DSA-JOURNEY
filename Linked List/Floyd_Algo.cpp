// Also called Hare and Tortoise Algorithm. In this algorithm we detect that is there cycle present in linked list or not by making two pointer one is hare and second one is tortoise

#include<iostream>
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
        }
        else
        {
            p->next = temp;
            p = temp;
        }
    }
}
void viewLinkedList(node* &head)
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
bool detectCycle(node* &head)
{
    node *hare = head;
    node *tortoise = head;
    while(hare->next != NULL && hare != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if(hare == tortoise)
            return true;
    }   
    return false;
}
void removeCycle(node* &head)
{   
    if(detectCycle(head))
    {
        node *hare = head;
        node *tortoise = head;
        do
        {
            tortoise = tortoise->next;
            hare = hare->next->next;
        } while (hare != tortoise);
        // We can choose any pointer and make it equal to head and then move it by one step
        tortoise = head;
        while(tortoise->next != hare->next)
        {
            tortoise= tortoise->next;
            hare = hare->next;
        }
        hare->next = NULL;
    }
    else
    {
        cout<<"Linked list does not contain any cycle";
    }
}
int main(int argc, char const *argv[])
{
    multiple_node(6);
    viewLinkedList(head);
    makeCycle(head,3);
    // cout<<detectCycle(head);
    // viewLinkedList(head);
    // removeCycle(head);
    viewLinkedList(head);
    return 0;
}
