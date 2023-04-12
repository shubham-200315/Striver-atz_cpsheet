int evenlyDivides(int N){
        //code here
       int count=0;
        int n=N;
        int s=N;
        while(s>0){
            int digit=s%10;
            if(digit>0 && n%digit==0){
                count++;
            }
            s/=10;
        }
        return count;
    }
