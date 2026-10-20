// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit = 0;
//         int left = 0,right = 1;
//         int maxprofit = 0;
        
//         while(right < prices.size()){
//             if(prices[right] > prices[left]){
//                 profit  = prices[right] - prices[left];
//                 maxprofit = max(maxprofit,profit);
//             }
//             else{
//                 left = right;
//             }
//             right++;
//         }
//         return maxprofit;
//         }
//     };


#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void buy_sell(vector<int>& prices){
        int maxprofit = 0, profit = 0;
        int left = 0, right = 1;
        while(right < prices.size()){
            if(prices[right] > prices[left]){
                profit = prices[right] - prices[left];
                maxprofit = max(maxprofit,profit);
            }
            else{
                left = right;
            }
            right++;
        }
        cout << maxprofit;
    }
};

int main(){
    solution s;
    vector<int> price = {6,3,2,1,4,5,7};
    s.buy_sell(price);
}

