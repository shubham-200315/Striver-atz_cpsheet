void printTriangle(int n) {
        // code here
        int count =0;
        for(int i = 0; i<n; i++)
        {
             count =0;
            for(int j =0; j<=i; j++){
            cout<<++count<<" ";
            }
            cout<<endl;
        }
    }
