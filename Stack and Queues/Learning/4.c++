void enqueue(int x) {
        
        input.push(x);
    }

    int dequeue() {
        
        
      if(input.size()==0)
      {
          return -1;
      }
           else{
               
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            int ans = output.top();
            output.pop();
            while(!output.empty())
            {
                input.push(output.top());
                output.pop();
            }
            return ans;
        }
      
    }
