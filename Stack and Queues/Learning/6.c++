void MyQueue:: push(int x)
{
    QueueNode *t=new QueueNode(x);
       if(front == NULL)
       {
           front = rear = t;
         
       }
       else{
           rear->next = t;
           rear = t;
       }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
         if(front == NULL)
         {
             return -1;
         }
         QueueNode* temp = front;
         int ans = temp->data;
         front = front->next;
         delete(temp);
         return ans;
}
