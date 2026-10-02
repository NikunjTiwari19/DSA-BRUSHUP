    #include <bits/stdc++.h>
    using namespace std;

    class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums,int N) {
            int maxcurr = 0;
                int curr = 0;
                for(int i = 0; i < N; i++){
                    if(nums[i] == 0){
                        maxcurr = max(maxcurr,curr);
                        curr = 0;
                    }
                    curr += nums[i];
                    maxcurr = max(maxcurr,curr);
                }
                return maxcurr;
            
            
        }
    };

    int main(){
    Solution s;
    int N;
    cin >> N;
    vector<int> nums(N);
    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }
    cout << s.findMaxConsecutiveOnes(nums,N);
        
    }