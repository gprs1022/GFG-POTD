 int atoi(string str) {
        //Your code here
        int ans = 0;
        bool isNegative = str[0]=='-';
        for(int i = 0;i<str.length();i++){
            if(str[i]>='0'&&str[i]<='9'){
                int strInt  = str[i]-'0';
                ans  = ans*10+strInt;
            }
            else if(i!=0 || (i==0 && str[i]!='-') )return -1;
        }
        return isNegative? -1*ans:ans;
        
    }