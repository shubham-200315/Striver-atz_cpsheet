 string compareNM(int n, int m){
        // code here
        string s1= "lesser";
        string s2= "greater";
        string s3= "equal";
        if(n<m){
        return s1;
        }
        else 
        if(n>m){
            return s2;
        }
        else{
            return s3;
        }
    }
