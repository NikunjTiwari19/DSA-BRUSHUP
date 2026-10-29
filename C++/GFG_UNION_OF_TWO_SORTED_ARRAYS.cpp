#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> findUnion(vector<int> &a, vector<int> &b) {
		
		vector<int> ans;
		a.insert(a.end(), b.begin(), b.end());
		
		sort(a.begin(), a.end());
		if (a.empty()) {
			return a;
		}
		
		ans.push_back(a[0]);
		for (int i = 1; i < a.size(); i++) {
			if (a[i] == a[i - 1]) {
				continue;
			}
			else {
				ans.push_back(a[i]);
			}
		}
		return ans;
		
	}
};
