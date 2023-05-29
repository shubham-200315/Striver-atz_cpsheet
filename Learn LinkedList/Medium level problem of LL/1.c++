 int getMiddle(Node *head)
    {
        if(head == NULL)
        {
            return 0;
        }
      Node* temp = head;
      int length = 0;
      while(temp!=NULL)
      {
          length++;
          temp = temp->next;
      }
      int mid = length/2;
      int count=0;
      temp = head;
      while(count<mid)
      {
          count++;
          temp = temp->next;
      }
      int ans = temp->data;
      return ans;
    }
