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
void intersect(node* &head1,node* &head2,int pos)
{
    node *temp1 = head1;
    node *temp2 = head2;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1; 
}
int lengthOfLinkedList(node* &head){
    int count = 0;
    node *len = head;
    if(head == NULL)
        return 0;
    while(len != NULL){
        len = len->next;
        count++;
    }
    return count;
}
// Finding intersection point of two linked list
int IntersectionPoint(node* &head1,node* &head2)
{
    int l1 = lengthOfLinkedList(head1);
    int l2 = lengthOfLinkedList(head2);
    int diff = 0,count = 0;
    node *ptr1,*ptr2;
    if(l1 > l2)
    {
        diff = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        diff = l2 -l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (count != diff)
    {
        ptr1 = ptr1->next;
        if(ptr1 == NULL)
            return -1;
        count++;
    }
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1 == ptr2)
            return ptr1->data;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    multiple_node(head1,5);
    viewLinkedList(head1);
    multiple_node(head2,3);
    viewLinkedList(head2);
    intersect(head1,head2,3);
    cout<<IntersectionPoint(head1,head2);
    return 0;
}
