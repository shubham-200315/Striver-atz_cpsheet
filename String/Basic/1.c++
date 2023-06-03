class Solution {
public:
    string removeOuterParentheses(string s) {
       string temp;
       int first =-1;
       int count =0;
       for(int i =0; i<s.length(); ++i)
       {
           if(s[i]== '(')
           {
               if(first==-1)
               {
                   first =i;
               }
               ++count;
           }
           else{
               --count;
           }
           if(count == 0){
           temp += s.substr(first+1, i-first-1);
           first =-1;
           }
       }
    return temp;
    }
};
