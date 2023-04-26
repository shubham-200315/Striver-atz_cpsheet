void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)
        {
            return;
        }
        int pi = partition(arr, low , high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[low];
       int count =0;
       for(int i=low +1; i<=high; i++)
       {
           if(arr[i]<=pivot)
           {
               count ++;
               
           }
       }
       int pivotIndex = low + count ;
       swap(arr[pivotIndex], arr[low]);
       int i =low;
       int j = high;
       while(i<pivotIndex && j>pivotIndex)
       {
           while(arr[i]<=arr[pivotIndex])
           {
               i++;
           }
           while(arr[j]>arr[pivotIndex])
           {
               j--;
           }
           if(i<pivotIndex&& j>pivotIndex)
           {
               swap(arr[i++], arr[j--]);
           }
       }
       return pivotIndex;
    }
