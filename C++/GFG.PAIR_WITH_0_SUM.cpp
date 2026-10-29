#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> getPairs(vector<int> &arr)
    {
        // code here
        vector<vector<int>> ans;
        vector<vector<int>> new_A;
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = arr.size() - 1;
        while (left < right)
        {
            vector<int> temp;
            if (arr[left] + arr[right] == 0)
            {
                temp.push_back(arr[left]);
                temp.push_back(arr[right]);
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
                left++;
                right--;
            }

            else if (arr[left] + arr[right] > 0)
            {
                right--;
            }

            else if (arr[left] + arr[right] < 0)
            {
                left++;
            }
        }
        sort(ans.begin(), ans.end());
        if (ans.empty())
        {
            return ans;
        }
        new_A.push_back(ans[0]);
        if (ans.size() > 1)
        {

            for (int i = 1; i < ans.size(); i++)
            {
                if (ans[i] == ans[i - 1])
                {
                    continue;
                }
                else
                {
                    new_A.push_back(ans[i]);
                }
            }
        }
        return new_A;
    }
};
