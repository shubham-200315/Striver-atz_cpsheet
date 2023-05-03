private:
   bool isPresent(int* &arr, long long low, long long high, long long x)
   {
       if(arr[low]==x || arr[high]==x)
       {
           return true;
       }
       isPresent(arr, low+1, high-1, x);
       return false;
   }
    public:

    int searchInSorted(int arr[], long long N, long long K) 
    { 
    //   int low=0;
    //   int high = N-1;
    //   while(low<high)
    //   {
    //       if(arr[low]==K|| arr[high]==K)
    //       {
    //           return 1;
    //       }
    //       else{
    //           low++;
    //           high--;
    //       }
    //   }
    //   return -1;
    if(isPresent(arr, 0, N-1, K))
    {
        return 1;
        
    }
    else{
        return -1;
    }
    }
};
