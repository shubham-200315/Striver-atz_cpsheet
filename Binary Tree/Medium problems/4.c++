int f(Node* root, int &maxi)
    {
        if(root==NULL) return 0;
        int lm = f(root->left, maxi);
        int rm = f(root->right, maxi);
        maxi = max(maxi, lm + rm + root->data);
        return max(0,root->data + max(lm, rm));
    }
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int maxi = -1e9;
        f(root, maxi);
        return maxi;
    }
