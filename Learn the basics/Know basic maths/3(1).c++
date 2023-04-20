	string is_palindrome(int n)
		{
		    // Code here.
		    int temp =0;
		    int final = n;
		    while(n>0)
		    {
		 
		   temp =temp*10 + n%10;
		    n=n/10;
		    }
		    if(temp==final)
		    {
		        return "Yes"
		    }
		    return "No";
		 
		}
