int dataTypeSize(string str) {
        // your code here
        
        if(str[0]=='C')
        
            return 1;
        
        if(str[0]=='I'||str[0]=='F')
        
            return 4;
        
        else
            return 8
        
    }
