bool searchKey(int n, struct Node* head, int key) {
       
       if(head == NULL)
       {
           return true;
       }
       Node* temp = head;
       while(temp!=NULL)
       {
           if(temp->data == key)
           {
               return true;
               break;
           }
           temp = temp->next;
       }
    }
