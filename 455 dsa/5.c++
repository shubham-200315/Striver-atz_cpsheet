void isPrime(int n) {
    
    int flag = true;
    for (int i = 2; i <= sqrt(n); i++) {
        // code here
        if(n % i == 0) {
            flag = false;
        }
    }
    
    
    if(flag == 1 && n >= 2) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    cout << endl;
}
