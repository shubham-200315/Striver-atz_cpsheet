int maximum(int &a, int &b)
{
    if(a>b)
    return a;
    else
     return b;
}
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long wl =0;
    long wr =0;
    long sum =0;
    int maxi =0;
    while(wr<a.size())
    {
        sum = sum+ a[wr];
        if(sum==k)
        {
            int x = (wr-wl)+1;
            maxi = maximum(maxi, x);
            wr++;
        }
        else if(sum<k)
        {
            wr++;
        }
        else if(sum>k){
          while (sum > k) {
            sum = sum - a[wl];
            wl++;
          }
          if(sum==k){
              int x = (wr-wl)+1;
              maxi = maximum(maxi,x );
          }
          wr++;
        }
    }
     return maxi;
}
