#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &a, vector<int> &b)
    {

        vector<int> ans;
        vector<int> temp;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int a_left = 0;
        int b_left = 0;
        while (a_left < a.size() && b_left < b.size())
        {
            if (a[a_left] < b[b_left])
                a_left++;
            else if (a[a_left] > b[b_left])
                b_left++;
            else if (a[a_left] == b[b_left])
            {
                temp.push_back(a[a_left]);
                a_left++;
                b_left++;
            }
        }
        if (temp.size() == 0)
            return ans;
        ans.push_back(temp[0]);
        for (int i = 1; i < temp.size(); i++)
        {
            if (temp[i] == temp[i - 1])
                continue;
            else
            {
                ans.push_back(temp[i]);
            }
        }

        return ans;
    }
};