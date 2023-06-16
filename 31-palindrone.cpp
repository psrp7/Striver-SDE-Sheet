
bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *slow1=head;
    LinkedListNode<int> *fast1=head;


    while(fast1!=NULL && fast1->next!=NULL){
          slow1 =slow1->next;
          fast1=fast1->next->next;
    }


    LinkedListNode<int>*temp=slow1;LinkedListNode<int>*temp2=slow1;
    LinkedListNode<int>*prev=NULL;
    while(temp!=NULL){
          LinkedListNode<int>*next1=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next1;
    }

       while(head!=slow1)
    {
        if(prev->data !=head->data)
        
             return false;
        
             head=head->next;
           prev=prev->next;
    }
                 return true;

}