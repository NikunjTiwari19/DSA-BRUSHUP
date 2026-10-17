#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverses(string &s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while(left < right){
            if(s[left] == ' ') left++;
            else if(s[right] == ' ') right--;
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }
};