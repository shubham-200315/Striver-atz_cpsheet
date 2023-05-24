void MyQueue :: push(int x)
{
      rear++;
       arr[rear]=x;
}


int MyQueue :: pop()
{
         if(front == rear )
         {
         front == rear == -1;
         return -1;
         }
         
         front++;
       int item = arr[front];
       
       return item;
       
}
