void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int firstZero =0;
	    for(int i =0; i<n; i++)
	    {
	        if(arr[i]!=0)
	        {
	            int temp = arr[i];
	            arr[i] = arr[firstZero];
	            arr[firstZero]= temp;
	            firstZero++;
	        }
	    }
	}
