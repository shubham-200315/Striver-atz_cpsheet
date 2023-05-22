Node* deleteNode(Node *head,int x)
{
    if(head==NULL)
    {
        return NULL;
    }
    
    Node* temp1 = head;
    Node* temp2 = NULL;
    int length =0;
    while(temp1!=NULL)
    {
        temp1 = temp1->next;
        length++;
    }
    if(length<x)
    {
        return NULL;
    }
    
    temp1 = head;
    if(x==1)
    {
        head = temp1->next;
        delete temp1;
        return head;
    }
    while(x-- >1)
    {
        temp2 = temp1;
        temp1= temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
    return head;
    
}
