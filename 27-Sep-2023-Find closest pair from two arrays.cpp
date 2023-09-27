
#include <bits/stdc++.h>
using namespace std;

class Solution{

  public:
vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
         int i=0, j=m-1;
         int diff=INT_MAX;
         int a=-1,b=-1;
         
         while(i<n&&j>=0){
             
              if(abs(arr[i]+brr[j]-x)<diff){
                   diff=abs(arr[i]+brr[j]-x);
                   a=arr[i];
                   b=brr[j];
               }
               
             if(arr[i]+brr[j]>x){
                 j--;
             }
             else i++;
         }
         return {a,b};
    }
};