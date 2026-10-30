#include <bitd/stdc++.h>
using namespace std;

class Solution
{
public:
    bool findTriplets(vector<int> &arr)
    {

        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {

            int sum = arr[i];
            int left = i + 1;
            int right = arr.size() - 1;
            while (left < right)
            {
                if ((sum + arr[left] + arr[right]) == 0 && sum != arr[right])
                {
                    return true;
                }
                else if ((sum + arr[left] + arr[right]) > 0)
                {
                    right--;
                }

                else if ((sum + arr[left] + arr[right]) < 0)
                {
                    left++;
                }
            }
        }
        return false;
    }
};
