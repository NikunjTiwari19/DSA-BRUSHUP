#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countTriplets(int sum, vector<int> &arr)
    {

        int ans = 0;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            int fix = arr[i];
            int left = i + 1;
            int right = arr.size() - 1;
            while (left < right)
            {
                if ((fix + arr[left] + arr[right]) < sum)
                {
                    ans += right - left;
                    left++;
                }
                else if ((sum + arr[left] + arr[right]) >= sum)
                {
                    right--;
                }
            }
        }
        return ans;
    }
};