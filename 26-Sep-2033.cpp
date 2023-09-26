vector<vector<int> > fourSum(vector<int> &a, int K) {
        // Your code goes here
        sort(a.begin(),a.end());
        int n=a.size();
        vector<vector<int> > ans;
        
        for(int i=0;i<n;i++)
        {
            if(i>0 && a[i]==a[i-1])continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && a[j]==a[j-1])continue;
                int s,k=j+1,l=n-1;
                while(k<l)
                {
                    s=a[i]+a[j]+a[k]+a[l];
                    if(s==K)
                    {
                        
                        vector<int> v={a[i],a[j],a[k],a[l]};
                        ans.push_back(v);
                        k++;l--;
                        while(k<l && a[k]==a[k-1])k++;
                        while(k<l && a[l]==a[l+1])l--;
                    }
                    else if(s<K)
                        k++;
                    else
                        l--;
                }
            }
        }
        return ans;
    }