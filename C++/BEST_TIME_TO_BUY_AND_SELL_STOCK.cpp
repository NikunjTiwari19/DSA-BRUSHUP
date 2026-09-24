#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int left = 0,right = 1;
        int maxprofit = 0;
        
        while(right < prices.size()){
            if(prices[right] > prices[left]){
                profit  = prices[right] - prices[left];
                maxprofit = max(maxprofit,profit);
            }
            else{
                left = right;
            }
            right++;
        }
        return maxprofit;
        }
    };