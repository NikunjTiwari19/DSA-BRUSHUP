#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalinSent(string &s)
    {

        int left = 0;
        int right = s.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        while (left < right)
        {
            if (!isalnum((unsigned char)s[left]))
            {
                left++;
                continue;
            }

            else if (!isalnum((unsigned char)s[right]))
            {
                right--;
                continue;
            }
            else if (tolower(s[left] != s[right]))
            {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};