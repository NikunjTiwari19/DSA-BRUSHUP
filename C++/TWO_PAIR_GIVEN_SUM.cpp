//ADVANCED APPROACH NAMES AS 2-POINTER APPROACH WITH TIME COMPLEXITY OF O(N):
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
    
    int temp;
    int n = arr.size();
    int left = 0 , right = n-1;
    for(int i=0;i<n;i++){
        if(arr[i] > arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i] = temp;
            
        }
    }
    while(left>right){
        if(arr[left] + arr[right] == target) return true;
        else if(arr[left] + arr[right] > target) right--;
        else left++;
    }
    
    }
};