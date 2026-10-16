#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = 1000;
        vector<int> freqA(n,0);
        int maxfreq = -1;
        int totalfreq = -1;

        for(int i = 0; i < nums.size(); i++){
            freqA[nums[i]]++;
        }
        for(int i = 0; i < n; i++){

            if(freqA[i] == 0) continue;

            if(freqA[i] > maxfreq){
                maxfreq = freqA[i];
                totalfreq = freqA[i];

            }

            else if(freqA[i] == maxfreq){
                totalfreq += freqA[i];
            }   
        }
        return totalfreq;
    }
};