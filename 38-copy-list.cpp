LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{

    unordered_map<LinkedListNode<int> *, LinkedListNode<int> *> p;
    LinkedListNode<int> *temp = head;
    LinkedListNode<int> *ptr = head;

    while (temp != NULL)
    {
        p[temp] = new LinkedListNode<int>(temp->data);
        temp = temp->next;
        ptr = ptr->next;
    }

    temp = head;
    ptr = head.next;

    while (temp != NULL)
    {
        p[temp]->next = p[temp->next];
        ptr = ptr->next;
        p[temp]->random = p[temp->random];
        temp = temp->next;
    }

       return map[head];
}