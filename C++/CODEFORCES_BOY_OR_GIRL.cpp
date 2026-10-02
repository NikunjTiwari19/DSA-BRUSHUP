#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void answer(string c, int N){
            int ans = 0;
            map<char,int> mp;
            for(int i = 0; i < N; i++)  mp[c[i]]++;


            ans = mp.size();
            if(ans%2==0) cout << "CHAT WITH HER!";
            else cout << "IGNORE HIM!";
        }
};

int main(){
    Solution s;
    string c;
    cin >> c;
    int N = c.size();
    s.answer(c,N);
}
