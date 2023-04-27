   private:
    bool solve (int arr[] , int n )
    {
        if(n==1 || n==0)
        {
            return true;
        }
        bool x = ( arr[n-1]>=arr[n-2] && solve(arr, n-1));
        if(x)
        {
            return true;
        }
        else{
        return false;
        }
    }
    
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        if(solve(arr, n))
        {
            return 1;
        }
        else{
            return 0;
        }
    }
