void MyStack ::push(int x) 
{
    StackNode* newNode = new StackNode(x);
    if(top==NULL)
    {
        top = newNode;
        return;
    }
   newNode->next = top;
   top = newNode;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top==NULL)
    {
        return -1;
    }
    StackNode* temp = top;
    top= top->next;
    int ans = temp->data;
    delete(temp);
    return ans;
     
}
