#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void convertToWave(int n, vector<int>& arr){
        int i=0;
        while(i<=(n-2)){
            swap(arr[i],arr[i+1]);
            i+=2;
        }
    }
};