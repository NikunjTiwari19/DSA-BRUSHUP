#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string removedigits(string nums, int k){

        int n = nums.size();
        vector<int> NSE(n,n);
        stack<char> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && k > 0 && st.top() > nums[i]){
                st.pop();
                k--;
            }
            st.push(nums[i]);
        }

        while(!st.empty() && k > 0){
            st.pop();
            k--;
        
        }

        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int start = 0;
        for(int i = 0; i < res.size(); i++){
            if(res[i] != '0'){
                start = i;
                break;
            }
        }
        res = res.substr(start);

    return res.empty() ? "0" : res;
    }
};

int main(){
    Solution s;
    string nums = "1432219";
    string r = s.removedigits(nums,3);
    cout << r;
}