 int lengthBST(Node* root)
    {
        
        if(root==NULL)
        {
            return 0;
        }
        
            return (1+ lengthBST(root->left) + lengthBST(root->right));
       
    }
   void preorder(Node* root, vector<int> &vec)
    {
       if(root==NULL)
       {
           return;
       }
        vec.push_back(root->data);
        preorder(root->left,vec);
        preorder(root->right,vec);
    }
    
    void inorder(Node* root, int &K)
    {
        if(root==NULL)
        return;
        
        inorder(root->left,K);
        K--;
        
        if(K==0)
        {
            ans = root->data;
        }
        if(ans!=-1)
        {
            return;
        }
        inorder(root->right, K);
        return;
    }
    
    int KthSmallestElement(Node *root, int K) {
    //   int len = lengthBST(root);
    //   if(len< K)
    //   {
    //       return -1;
    //   }
    //   vector<int> vec;
    //   preorder(root, vec);
    //   sort(vec.begin(), vec.end());
    //   int ans = vec[K-1];
    //   return ans;
       
       inorder(root,K);
       return ans;
       
    }
