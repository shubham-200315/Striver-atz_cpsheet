int countNodesinLoop(struct Node *head)
{
    Node* slow = head;
    Node* fast = head;
    if(head==NULL)
    {
        return 0;
    }
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            int count =1;
            while(slow->next != fast)
            {
                count++;
                slow = slow->next;
            }
            return count;
        }
    }
    return 0;
}
