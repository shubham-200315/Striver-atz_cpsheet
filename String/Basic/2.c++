string reverseWords(string S) 
    { 
        if(S.length() == 0)
        {
            return {""};
        }
        stack<string> st;
        string temp ;
        int n = S.length();
        char ch = S[n-1];
        for(int i =0; i<S.length(); i++)
        {
            temp+=S[i];
            if(S[i]=='.' )
            {
               st.push(temp);
               temp ="";
            }
            if(i==n-1)
            {
                temp = temp + ".";
                st.push(temp);
            }
            
            
            
        }
        
        string ans ="";
        while(!st.empty())
        {
            ans+= st.top();
            st.pop();
        }
        string final = "";
        final+= ans.substr(0,n);
        return final;
    } 
