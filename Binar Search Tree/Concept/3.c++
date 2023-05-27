int minValue(Node* root) {
    if(root==NULL)
    {
        return -1;
    }
    if(root->left == NULL)
    {
        int ans = root->data;
        return ans;
    }
    while(root->left!=NULL)
    {
        root =root->left;
    }
    int ans = root->data;
    return ans;
}
