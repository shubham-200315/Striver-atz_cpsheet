class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        if(n==1)
         return;
         int count =0;
         for(int i =0; i<n-1; i++)
         {
             if(arr[i]>arr[i+1])
             {
                 swap(arr[i], arr[i+1]);
                 
                    count ++;
                 
             }
         }
         if(count ==0)
         return;
         
      bubbleSort(arr, n-1);
    }
};
