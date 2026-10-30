#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &arr, int target)
    {

        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            int fix = arr[i];
            if (i > 0 && arr[i] == arr[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (j > i + 1 && arr[j] == arr[j - 1])
                {
                    continue;
                }
                int sec_fix = arr[j];
                int left = j + 1;
                int right = arr.size() - 1;
                while (left < right)
                {
                    vector<int> temp;
                    if ((fix + sec_fix + arr[left] + arr[right]) == target)
                    {
                        ans.push_back({fix, sec_fix, arr[left], arr[right]});
                        left++;
                        right--;

                        while (left < right && arr[left] == arr[left - 1])
                        {
                            left++;
                        }
                        while (left < right && arr[right] == arr[right + 1])
                        {
                            right--;
                        }
                    }

                    else if ((fix + sec_fix + arr[left] + arr[right]) < target)
                    {
                        left++;
                    }

                    else if ((fix + sec_fix + arr[left] + arr[right]) > target)
                    {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};
