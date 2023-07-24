/**
 * Definition for singly-linked list.
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int NumberOfNode(ListNode *head)
{
    int count = 0;
    ListNode *ptr = head;
    while (ptr->next != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
ListNode *middleNode(ListNode *head)
{
    int num = NumberOfNode(head);
    ListNode *ptr = head;
    int orignalNum = num;
    if (num % 2 == 0)
    {
        while (num / 2)
        {
            ptr = ptr->next;
            num--;
        }
        while (ptr->next != NULL)
        {
            cout << ptr->val << " ";
        }
    }
    else
    {
        num = orignalNum;
        while (ceil(num / 2))
        {
            ptr = ptr->next;
            num--;
        }
        while (ptr->next != NULL)
        {
            cout << ptr->val << " ";
            ptr = ptr->next;
        }
    }
    return ptr;
}
void multiple_node(int n)
{
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter a data item " << i + 1 << ": ";
        cin >> data;
        ListNode *temp = new node(data);
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
int main()
{
    multiple_node(5);
    return 0;
}