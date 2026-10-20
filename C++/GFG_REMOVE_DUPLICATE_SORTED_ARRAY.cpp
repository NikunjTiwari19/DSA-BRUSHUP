#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        
        vector<int> ans;
        int n  = arr.size();
        if(n == 0) return ans;
        
        ans.push_back(arr[0]);
        for(int i = 1; i < n ; i++){
            if(arr[i] != arr[i - 1]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
        
        
    }
};