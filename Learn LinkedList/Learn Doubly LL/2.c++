 Node* deleteNode(Node *head_ref, int x)
    {
    
      
        Node* prev ;
        
        Node* curr = head_ref;
        
        if(x==1){
            curr = curr->next;
            curr->prev = NULL;
            return curr;
        }
        
        int i=1;
        
        while(i<x){
            i++;
            prev = curr;
            curr = curr->next;
        }
        
        if(curr->next == NULL){
            prev->next = NULL;
        }else{
            prev->next = curr->next;
            curr->next->prev = prev;
            curr->next = NULL;
            curr->prev = NULL;
        }
        
      
        return head_ref;
      
    }
