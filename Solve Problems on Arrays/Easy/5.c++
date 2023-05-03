private:
	//reverse the elements 
	void reverse(int arr[], int low, int high)
	{
	    while(low<high)
	    {
	        long temp = arr[low];
	        arr[low]= arr[high];
	        arr[high]= temp;
	        low++;
	        high--;
	        
	    }
	}
	public:
	
	   // Your code goes here
	  void leftRotate(int arr[], int k, int n) 
	
	{ 
	    k=k%n;
	  reverse(arr, 0, k-1);// rotate k no. of element 
	  reverse(arr,k,n-1);//rotate n-d element
	  reverse(arr,0,n-1);// whole array
	} 
