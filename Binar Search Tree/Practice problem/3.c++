Node* insert(Node* root, int Key) {
        if(root==NULL)
        {
    Node* newNode = new Node(Key);
        
            return newNode;
        }
       

            if(root->data==Key)
            {   
                return root;
            }
            else if(root->data>Key)
            {
            root->left =   insert(root->left , Key);
            }
            else{
              root->right =     insert(root->right, Key);
            }
        
       return root;
}
