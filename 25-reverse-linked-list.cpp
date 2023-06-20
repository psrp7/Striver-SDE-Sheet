#include <bits/stdc++.h>



LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   if(head==NULL || head->next==NULL) return head;
    LinkedListNode<int>* prev2 = NULL;
    LinkedListNode<int>* curr2 = head;
    LinkedListNode<int>* forward2 = NULL;

    while(curr2 != NULL)
    {
        forward2 = curr2->next;
        curr2->next = prev2;
        prev2 = curr2;
        curr2 = forward2;

    }

    return prev2;
}