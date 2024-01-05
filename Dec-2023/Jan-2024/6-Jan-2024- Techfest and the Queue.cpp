 int sum(int n){
        int c=0;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                c++;
                n=n/i;
            }
        }
        if(n>1){
            c++;
        }
        return c;
    }
    int sumOfPowers(int a, int b){
        int ans = 0;
        for(int n=a;n<=b;n++){
            ans+=sum(n);
        }
        return ans;
    }