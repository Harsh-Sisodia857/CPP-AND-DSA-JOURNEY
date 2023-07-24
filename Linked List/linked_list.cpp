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
void insertAtStart(node* &head,int data)
{
    // int data;
    // cout << "Enter the data to be inserted at Starting:"
    //      << " ";
    // cin >> data;
    node *new_n = new node(data);
    new_n->next = head;
    head = new_n;
}
void insertAtEnd()
{
    int data;
    cout << "Enter the data to be inserted at End :"
         << " ";
    cin >> data;
    node *new_n = new node(data);
    node *traverse = head;
    while (traverse->next != NULL){
        traverse = traverse->next;
    }
    traverse->next = new_n;
}
void deleteNode()
{
    int num;
    cout << "Enter the data to be deleted: ";
    cin >> num;
    if (head == NULL){
        cout << "Linked List is Empty";
        return;
    }
    node *toDelete = head, *q;
    if (head->data == num){
        delete toDelete;
        head = head->next;
        return;
    }
    while (toDelete->data != num)
    {
        q = toDelete;
        toDelete = toDelete->next;
    }
    q->next = q->next->next;
    // Delete is an operator that is used to destroy array and non-array(pointer) objects which are created by new expression
    delete toDelete;
}

// For reversing the linked list
// Idea: We will keep three-pointers, for the previous, current, and next node.
// Hint: We have to connect current->next to the previous node, and then
// move to the next node.
node *reversingNode(node *head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node *reversek(node *head, int k)
{
    int count = 0;
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    
    return prevptr;
}

node *reverseRecursively(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *temphead = reverseRecursively(head->next);
    head->next->next = head;
    head->next = NULL;
    return temphead;
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
void kappend(node* &head,int k){
    int l = lengthOfLinkedList(head);
    node *newTail,*newHead,*traverse = head;
    int count = 1;
    while(traverse->next != NULL)
    {
        if(count == l-k)
            newTail = traverse;
        if(count == l-k+1)
            newHead = traverse;
        traverse = traverse->next;
        count++;
    }
    newTail->next = NULL;
    traverse->next = head;
    head = newHead;
}
void evenAfterOdd(node* &head){
    node *even = head->next;
    node *odd = head;
    node *evenHead = even;
    while(odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    if(odd->next != NULL)
    {
        even->next = NULL;
    }
}
int main(int argc, char const *argv[])
{
    multiple_node(3);
    // insertAtStart(head,2);
    // insertAtStart(head,4);
    // insertAtStart(head,5);
    // insertAtStart(head,9);
    // insertAtStart(head,14);
    // insertAtStart(head,12);
    viewLinkedList(head);
    reversingNode(head);
    // node *newHead = reversek(head,3);
    // viewLinkedList(head);
    // insertAtEnd();
    // deleteNode();
    // node *new_head = reversingNode(head);
    // node *new_head = reversek(head,2);
    // cout<<lengthOfLinkedList(head);
    // kappend(head,3);
    // evenAfterOdd(head);
    // viewLinkedList(newHead);
    return 0;
}
