#include<bits/stdc++.h>
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
node* head1 = NULL,*head2 = NULL, *p;

void multipleNode(node* &head,int n){
    for (int i = 0; i < n; i++){
        cout << "Enter data item " << i + 1 << " :";
        int data;
        cin >> data;
        node *temp = new node(data);
        if(head == NULL){
            head = temp;
            p = head;
        }
        else{
            p->next = temp;
            p = temp;
        }
    }
}

void print(node *head)
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
int lengthOfLinkedList(node* &head)
{
    int count = 0;
    node *len = head;
    if (head == NULL)
        return 0;
    while (len != NULL)
    {
        len = len->next;
        count++;
    }
    return count;
}

void intersect(node* &head1,node* &head2,int pos){
    int l1 = lengthOfLinkedList(head1);
    int l2 = lengthOfLinkedList(head2);
    if(l1 > l2){
        node* temp1 = head1;
        node *temp2 = head2;
        pos--;
        while(pos--){
            temp1 = temp1->next;
        }
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp1;
        }
    else{
        node *temp2 = head2;
        node *temp1 = head1;
        pos--;
        while (pos--)
        {
            temp2 = temp2->next;
        }
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp2;
    }
}

int intersectionPoint(node* &head1,node* &head2){
    int l1 = lengthOfLinkedList(head1);
    int l2 = lengthOfLinkedList(head2);
    int diff = 0;
    int count = 0;
    node *temp1 = head1;
    node *temp2 = head2;
    if(l1 > l2){
    diff = l1 - l2;
        while(diff--){
            temp1 = temp1->next;
        }
        while (temp1 != NULL && temp2 != NULL)
        {
            if(temp1 == temp2){
                return temp1->data;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    else{
        diff = l2 - l1;
        while (diff--)
        {
            temp2 = temp2->next;
        }
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1 == temp2)
            {
                return temp2->data;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return -1;
}

// Merge two sorted linked list
node* mergeLinkedList(node* &head1,node* &head2){
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *merge = new node(-1);
    node *p3 = merge;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->data < ptr2->data){
            merge->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            merge->next = ptr2;
            ptr2 = ptr2->next;
        }
        merge = merge->next;
    }
    while(ptr1 != NULL){
        merge->next = ptr1;
        ptr1 = ptr1->next;
        merge = merge->next;
    }
    while (ptr2 != NULL)
    {
        merge->next = ptr2;
        ptr2 = ptr2->next;
        merge = merge->next;
    }
    return p3->next;
}


int main()
{
    multipleNode(head1, 5);
    multipleNode(head2, 2);
    print(head1);
    print(head2);
    // intersect(head1, head2, 3);
    // print(head2);
    // cout << intersectionPoint(head1, head2);
    node *newHead = mergeLinkedList(head1, head2);
    print(newHead);
    return 0;
}