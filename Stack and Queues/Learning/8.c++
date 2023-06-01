 void solve(stack<int> &s, int &mini)
     {
         if(s.size() == 0)
         {
             return;
         }
         int num = s.top();
         s.pop();
         mini = min(mini, num);
         solve(s, mini);
         s.push(num);
     }
       /*returns min element from stack*/
       int getMin(){
           
           int mini = INT_MAX;
          if(s.empty())
          {
              return -1;
          }
          solve(s, mini);
          return mini;
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           if(s.empty())
           {
               return -1;
           }
           int num = s.top();
           s.pop();
           return num;
       }
       
       /*push element x into the stack*/
       
       void push(int x){
           
           s.push(x);
           return;
           
       }
