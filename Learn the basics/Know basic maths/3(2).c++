 bool isPalindrome(int x) {
        
       long long int temp =0;
        int final = x;
        while(x>0)
        {
            temp = temp *10 + x%10;
            x = x/10;
        }
        if(temp == final )
        {
            return true;
        }
        return false;
    }
