public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       int i = 0; 
       int j =0;
       int k =-1;
       vector<int> ans;
       while(i<n&& j<m)
       {
           if(arr1[i]<arr2[j])
           {
               if(k!=arr1[i])
               {
                   ans.push_back(arr1[i]);
                   k = arr1[i];
               }
               i++;
           }
           else{
               if(k!=arr2[j])
               {
                   ans.push_back(arr2[j]);
                   k = arr2[j];
               }
               j++;
           }
       }
       
       while(i<n)
       {
           
           
               if(k!=arr1[i])
               {
                   ans.push_back(arr1[i]);
                   k = arr1[i];
               }
               i++;
           
       }
       while(j<m)
       {
            if(k!=arr2[j])
               {
                   ans.push_back(arr2[j]);
                   k = arr2[j];
               }
               j++;
       }
       return ans;
    }
