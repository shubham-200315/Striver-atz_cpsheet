void QueueStack :: push(int x)
{
       q1.push(x);
     
       
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    
        if(!q1.empty())
        {
            while(q1.size()!=1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            
    int ans = q1.front();
            q1.pop();
        q2.swap(q1);
        return ans;
        }
        else{
            return -1;
        }
}
