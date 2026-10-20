#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findIntersection(vector<int> &a, vector<int> &b)
    {

        vector<pair<int, int>> temp;
        vector<int> ans;
        vector<pair<int, int>> p1;
        vector<pair<int, int>> p2;
        int ptr1 = 0;
        int ptr2 = 0;
        for (int i = 0; i < a.size(); i++)
        {
            p1.push_back({a[i], i});
        }
        sort(p1.begin(), p1.end());
        sort(b.begin(), b.end());
        while (ptr1 < a.size() && ptr2 < b.size())
        {
            if (p1[ptr1].first == b[ptr2])
            {
                temp.push_back(p1[ptr1]);
                ptr1++;
                ptr2++;
            }
            else if (p1[ptr1].first < b[ptr2])
            {
                ptr1++;
            }

            else
            {
                ptr2++;
            }
        }

        sort(temp.begin(), temp.end(), [](pair<int, int> x, pair<int, int> y)
             { return x.second < y.second; });

        for( auto i: temp){
            ans.push_back(i.first);
        }
        return ans;
    }
};
