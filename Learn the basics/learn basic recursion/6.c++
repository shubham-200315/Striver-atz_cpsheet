 vector<long long> factorialNumbers(long long N)
    {
       vector<long long> ans;
       long long i =1;
       long long prod =1;
       while(prod<=N)
       {
           prod = prod *i;
           if(prod<=N)
           ans.push_back(prod);
           i++;
       }
      
    
    return ans;
       
        
       
    }
