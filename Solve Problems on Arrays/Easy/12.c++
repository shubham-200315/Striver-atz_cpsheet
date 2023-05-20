	int search(int A[], int N){
	    
	    
// 	   #Approach 1:-
// 	  std::unordered_map<int, int> mp;
// 	  for(int i=0; i<N; i++)
// 	      mp[A[i]]++;
// 	  for(auto i: mp)
// 	  {
// 	    if(i.second==1)
// 	    return i.first; 
// 	  }


    //  #Approach 2:-
    //  int wr =0;
    //  while(wr<N)
    //  {
    //      if(A[wr]==A[wr+1])
    //          wr = wr+2;
    //      if(A[wr]!=A[wr+1])
    //      {
    //          int element = A[wr];
    //          return element;
    //      }
    //  }
    //  return 0;
    //  }
    
    
    // #Approach 3:-
    int s =0;
    int e = N-1;
     while(s<=e)
     {
         int m = (s+e)/2;
         if(A[m]!= A[m-1] && A[m]!= A[m+1])
         {
             return A[m];
         }
         else if(A[m] == A[m-1]){
             if((e-m)%2 == 1)
             {
                 s= m+1;
             }
             else{
                 e = m -2;
             }
             
         }
         else{
              if((e-m)%2 == 1)
             {
                 e = m -1;
             }
             else{
                 s= m+2;
             }
         }
     }
	}
