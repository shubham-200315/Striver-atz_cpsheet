int isPalindrome(string S)
    {
        // Your code goes here
        int first = 0;
        int n = S.size();
        int last = n-1;
        while(first<last)
        {
            if(S[first]==S[last])
            {
                first++;
                last--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
