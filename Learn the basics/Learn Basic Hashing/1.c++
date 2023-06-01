 void frequencyCount(vector<int>& arr,int N, int P)
    { 
        unordered_map<int, int> mp;
        for(int i=0; i<=N; i++)
        {
            mp[arr[i]]++;
        }
        arr.clear();
        for(int i =1; i<=N; i++)
        {
            arr.push_back(mp[i]);
        }
        
    }
