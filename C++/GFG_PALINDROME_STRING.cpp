#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string& s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        bool flg = false;
        while(left < right){
            flg = false;
            if(s[left] == s[right]){
                flg = true;
                left++;
                right--;
            }
            else{
                break;
            }
            
        }
        
        return flg;
    }
};