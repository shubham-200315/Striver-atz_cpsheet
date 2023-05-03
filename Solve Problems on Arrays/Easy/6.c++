 private:
    void reverse(int arr[], int low, int high)
    {
        while(low<high)
        {
            long temp = arr[low];
            arr[low] = arr[high];
            arr[high]= temp;
            low++;
            high--;
        }
    }
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        d = d%n;
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0, n-1);
    }
