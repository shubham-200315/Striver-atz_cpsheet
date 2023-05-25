 Node* constructDLL(vector<int>& arr) {
        
           Node* head = new Node(arr[0]);
          Node* temp = head;
          int i =1; 
       while(i<arr.size())
       {
          if(temp->next == NULL){
           
           Node* newNode = new Node(arr[i]);
           temp->next = newNode;
           newNode->prev = temp;
           temp = newNode;
       }
        i++;
       }
        return head;
        
    }
