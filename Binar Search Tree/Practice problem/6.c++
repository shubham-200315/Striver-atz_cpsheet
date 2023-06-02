 bool solve(Node* root, int a, int b)
     {
         if(root==NULL) 
         return true;
         if(root->data<=a || root->data >=b)
         {
             return false;
         }
         return solve(root->left, a, root->data) && solve(root->right, root->data, b);
     }
    
    bool isBST(Node* root) 
    {
      return solve(root, INT_MIN, INT_MAX);
    }
