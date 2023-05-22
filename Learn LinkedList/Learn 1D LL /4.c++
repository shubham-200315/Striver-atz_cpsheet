int getCount(struct Node* head){
    
       if(head==NULL)
       {
           return 0;
       }
       
       int length =0;
       Node* temp = head;
       while(temp!=NULL)
       {
           temp = temp->next;
           length++;
       }
    return length;
    }
