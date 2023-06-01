 int prec(char c)
     {
         if(c=='^')
         return 3;
         if(c=='*'|| c=='/')
         return 2;
         if(c=='+'|| c=='-')
         return 1;
         else{
             return -1;
         }
     }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
       stack<char>st;
        string ans;
        for(int i =0; i<s.length(); i++)
        {
            char c = s[i];
            if(isalnum(c)){
            ans+=c;
            }
            else if(c=='(')
            {
                st.push('(');
            }
            else if(c==')')
            {
                while(!st.empty() && st.top()!= '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
           else{
               while(!st.empty() && prec(c)<= prec(st.top()))
               {
                   ans+=st.top();
                   st.pop();
               }
               st.push(c);
           } 
        }
        while(!st.empty())
        {
            ans+= st.top();
            st.pop();
        }
        return ans;
    }
