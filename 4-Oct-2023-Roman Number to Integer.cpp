#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char,int>mp;
    
            mp['I']=1;
            mp['V']=5;
             mp['X']=10;
             mp['L']=50;
            mp['C']=100;
            mp['D']=500;
            mp['M']=1000;
                int n=str.size();
                int ans=0;
         for(int i=0;i<n;i++){
             if(i!=n&& mp[str[i]]<mp[str[i+1]]){
                 ans=ans-mp[str[i]];
             }
           else{  ans+=mp[str[i]];}
         }        
         return ans;
    }
};