#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int answer(vector<int>& nums) {

        int N = 300;
        int freqA[N] = {0};
        int index = 0;

        for (int i = 0; i < nums.size(); i++)
            freqA[nums[i]]++;

        for (int i = 0; i < freqA[0]; i++) {
            nums[index] = 0;
            index++;
        }

        for (int i = 0; i < freqA[1]; i++) {
            nums[index] = 1;
            index++;
        }

        for (int i = 0; i < freqA[2]; i++) {
            nums[index] = 2;
            index++;
        }

        for (int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";

        return 0;
    }
};

int main() {
    vector<int> a = {2, 0, 2, 1, 1, 0};

    Solution s;
    s.answer(a);

    return 0;
}