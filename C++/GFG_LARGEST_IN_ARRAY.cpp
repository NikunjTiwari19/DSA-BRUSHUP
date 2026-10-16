#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int left = 0;
        int right = 1;
        while(right != arr.size()){
            
            if(arr[left] <= arr[right]){
                left = right;
            }
            
            right++;
            
        }
        return arr[left];
    }   
};
