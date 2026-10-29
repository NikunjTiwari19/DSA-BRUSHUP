#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasTripletSum(vector<int> &arr, int target)
    {

        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {

            int sum = arr[i];
            int left = 0;
            int right = arr.size() - 1;

            while (left < right)
            {

                if ((sum + arr[left] + arr[right]) == target && sum != arr[left] && sum != arr[right])
                {
                    return true;
                }

                else if ((sum + arr[left] + arr[right]) < target)
                    left++;

                else
                    right--;
            }
        }

        return false;
    }
};
