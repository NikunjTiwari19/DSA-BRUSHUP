#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
    
    int N = arr.size();
    sort(arr.begin(),arr.end());
    int left = 0, right = N-1;
    bool ans = false;
    while(left<right){
        if(arr[left] + arr[right] == target){
            ans = true;
            break;
        }
        else if(arr[left] + arr[right] > target) right--;
        else left++;
    }
    return ans;
    }
    
};
