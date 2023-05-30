 vector<int> postOrder(Node* node) {
        
        Node* curr = node;
    vector< int > ans;
   if (curr == NULL)
   {
    return ans;
   }
        stack<Node*> q;
        q.push(curr);
     while(!q.empty())
     {
         Node* frontNode = q.top();
         ans.push_back(frontNode->data);
         q.pop();
         if(frontNode->left!= NULL)
         {
             q.push(frontNode->left);
         }
         if(frontNode->right!= NULL)
         {
             q.push(frontNode->right);
         }
     }
    reverse(ans.begin(), ans.end());
    return ans;
    }
