 bool isBSTTraversal(vector<int>& nums) {
          int i =1;
        while(i<nums.size())
        {
            if(nums[i-1]<nums[i])
            {
                i++;
                
            }
            else{
                return false;
            }
            
        }
        
        return true;
        
          
          
    }
