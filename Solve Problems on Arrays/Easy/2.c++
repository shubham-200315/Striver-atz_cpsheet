int print2largest(int arr[], int n) {
	   
	    sort(arr, arr+n);
	    
	    for(int i = n-1; i>0; i--)
	    {
	        if(arr[i]>arr[i-1])
	        {
	            return arr[i-1];
	            
	        }
	    }
	    return -1;
	}
