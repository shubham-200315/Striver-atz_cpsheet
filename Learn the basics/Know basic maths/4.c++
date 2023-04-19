long long GCD (long long a , long long b)
       {
           if(a==b)
           {
               return a;
           }
           if(a>b) return GCD(a-b , b );
           if(a<b) return GCD(a, b-a);
       }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
      long long gcd = GCD(A,B);
      long long lcm = A*B/gcd;
      return {lcm, gcd};
       
    }
