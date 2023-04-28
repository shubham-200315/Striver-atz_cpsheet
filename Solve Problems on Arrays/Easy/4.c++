int remove_duplicate(int a[],int n){
        // code here
        
           vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1]){
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            a[i]=v[i];
        }
        return v.size();
    }
