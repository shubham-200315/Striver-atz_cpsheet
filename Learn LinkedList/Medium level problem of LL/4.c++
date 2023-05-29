bool detectLoop(Node* head)
    {
    //      if(head==NULL || head->next==NULL)
    //   {
    //       return false;
    //   }
       
    //   Node* curr = head;
    //   unordered_map<Node* , bool> visited;
    //   while(curr)
    //   {
    //       if(visited.find(curr)!=visited.end())
    //       {
    //       return true;
    //       }
    //       else{
    //           visited[curr] =1;
    //           curr = curr->next;
    //       }
    //   }
    //     return false;
    Node* slow = head;
    Node* fast = head;
     while(fast and fast->next)
     {
         slow = slow->next;
         fast = fast->next->next;
         if(slow==fast)
         {
             return true;
         }
     }
     return false;
        
    }
