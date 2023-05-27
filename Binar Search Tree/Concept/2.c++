bool search(Node* root, int x) {
    
    if(root == NULL)
    {
        return 0;
    }
   if(root->data == x)
    {
        return 1;
    }
    if(root->data > x){
      search(root->left, x);
        
    }
    else{
   
      search(root->right, x);
    }
  
}
