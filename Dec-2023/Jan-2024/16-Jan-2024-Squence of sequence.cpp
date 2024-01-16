class Solution{
public:
    
    int func(int cnt,int ele,int m,int n)
    {  
        if(ele>m) return 0;
        
        if(cnt==(n-1) && ele<=m) return (m+1-ele);
        
        int k=(m/pow(2,n-1-cnt));
        int ans=0;
        for(int i=ele;i<=k;i++)
        {
            ans+=func(cnt+1,2*i,m,n);
        }
        return ans;
    }
   
    int numberSequence(int m, int n)
    {
       
        return func(0,1,m,n);
    }
};