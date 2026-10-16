#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        
        int left = 0;
        int right = 1;
        vector<int> ans;
        while(right != arr.size()){
            if(arr[right] <= arr[left]) left = right;
            right++;
        }
        ans.push_back(arr[left]);   
        left = 0;
        right = 1;
        while(right != arr.size()){
            if(arr[right] >= arr[left]) left = right;
            right++;
        }
        
        ans.push_back(arr[left]);
        return ans;
        }
    };