void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int len1 = m-l+1;
         int len2 = r-m;
         int  first[len1]; 
         int second[len2]; 
         int mainArrayIndex = l;
         for(int i =0; i<len1; i++)
         {
             first[i]= arr[mainArrayIndex++]; 
         }
          for(int i =0; i<len2; i++)
         {
             second[i]= arr[mainArrayIndex++]; 
         }
         
         int index1= 0;
         int index2=0; 
          mainArrayIndex =l;
         
         while(index1<len1&& index2<len2)
         {
             if(first[index1]<second[index2])
             {
                 arr[mainArrayIndex++] = first[index1++];
             }
             else{
                 arr[mainArrayIndex++] = second[index2++];
             
             }
         }
         
          while(index1<len1)
          {
              arr[mainArrayIndex++] = first[index1++];
          }
            while(index2<len2)
          {
              arr[mainArrayIndex++] = second[index2++];
          }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int mid = (l+r)/2;
        if(l>=r)
        {
            return ;
        }
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
