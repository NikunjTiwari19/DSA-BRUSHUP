#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int answer(vector<int> &arr)
    {
        int N = arr.size();
        int pref[N + 1] = {0};
        int suff[N + 2] = {0};
        
        for (int i = 1; i <= N; i++)    pref[i] = pref[i - 1] + arr[i - 1];
        for (int i = N; i >= 1; i--)    suff[i] = suff[i + 1] + arr[i - 1];

        bool found = false;
        for (int i = 1; i <= N; i++)
        {
            if (pref[i - 1] == suff[i + 1])
            {
                found = true;
                return i - 1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> a;
    a = {1, 2, 3};
    cout << s.answer(a);
    return 0;
}
