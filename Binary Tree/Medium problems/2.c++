int findHeight(Node* &root)
    {
        if(root==NULL)
        {
            return 0;
        }
       
         int lh = findHeight(root->left);
        if(lh==-1)
        {
            return -1;
        }
            int rh = findHeight(root->right);
            if(rh==-1)
            {
                return -1;
            }
            if(abs(lh-rh)>1)
            {
                return -1;
            }
            return (1+ max(lh, rh));
    }
    bool isBalanced(Node *root)
    {
      return  findHeight(root) == -1? 0:1;
    }
