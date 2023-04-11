void printTriangle(int n) {
	    // code here
	    int count =0;
	    for(int i=n; i>0; i--)
	    {
	        count =0;
	        for(int j=i; j>0; j-- )
	        {
	            cout<<++count<<" ";
	        }
	        cout<<endl;
	    }
	}
