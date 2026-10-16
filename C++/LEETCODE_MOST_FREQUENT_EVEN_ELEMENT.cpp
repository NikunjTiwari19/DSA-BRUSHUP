#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = 100000;
        vector<int> freqA(n,0);
        int ans = -1;
        int max_frequency = 0;
        for(int i  = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0)     freqA[nums[i]]++;
        }

        for(int i = 0; i < freqA.size(); i++){
            if(freqA[i] > max_frequency){
                max_frequency = freqA[i];
                ans = max(ans,i);
            }
            
        }
        return ans;

    }
};