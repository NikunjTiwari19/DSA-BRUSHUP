#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {

        const int N = 100000;
        int freqA[N] = {0};
        int freqB[N] = {0};
        
        for(int i=0;i< a.size();i++) freqA[a[i]]++;
        
        for(int i=0;i<b.size();i++) freqB[b[i]]++;
        
        bool ans = true;
        
        for(int i =0;i <N;i++){
            if(freqA[i] != freqB[i]){
                ans = false;
                break;
                
            }
        }
        return ans;
    }
};