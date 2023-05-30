 private:
    int solve(Node* root, int& diameterLength)
    {
        if(!root)
        {
            return 0;
        }
        int lh = solve(root->left, diameterLength);
        int rh = solve(root->right, diameterLength);
        diameterLength = max(diameterLength, lh+rh+1);
        return 1 + max(lh,rh);
    }
  public:
    // Function to return the diameter of a Binary Tree.
    
    int diameter(Node* root){
        int diameterLength =0;
        solve( root, diameterLength);
        return diameterLength;
    }
