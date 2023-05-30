int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    int ciel = -1;
    while(root)
    {
        if(root->data == input)
        {
            ciel = root->data;
            return ciel;
        }
        if(root->data > input)
        {
            ciel = root->data;
            root= root->left;
        }
        else{
            root= root->right;
        }
        
    }
    return ciel;
