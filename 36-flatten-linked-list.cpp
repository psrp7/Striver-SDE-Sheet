Node *merge(Node *head1, Node *head2)
{

    Node *temp = new Node(0);
    Node *curr = temp;
    Node *curr2 = temp;

    Node *node1 = head1;
    Node *node2 = head2;
Node *node22 = head2;
    head1->next = NULL;
    head2->next = NULL;
    int count = 0;

    while (node1 != NULL && node2 != NULL)
    {

        if (node1->data <= node2->data)
        {

            curr->child = node1;
            curr = node1;
            node1 = node1->child;
             node22 = node22->child;
            count++;
        }

        else
        {

            curr->child = node2;
            curr = node2;
            count--;
            node2 = node2->child;
        }
    }

    if (node1 != NULL)
        curr->child = node1;
    if (node2 != NULL)
        curr->child = node2;

    return temp->child;
}




Node *flattenLinkedList(Node *head)
{

    if (head->next == NULL)
        return head;

    return merge(head, flattenLinkedList(head->next));
}