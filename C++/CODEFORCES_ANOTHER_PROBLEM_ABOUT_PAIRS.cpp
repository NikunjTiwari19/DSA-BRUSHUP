#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int left = 0;
        int right = 1;
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        while(right != n){
            if((arr[left]*arr[right]) == (right - left)){
                ans+=1;
                right++;
            }
            else if((arr[left]*arr[right]) > (right - left)){
                left = right;
            }

            else if((arr[left]*arr[right]) < (right - left)){
                left++;
            }
        }
        cout << ans;
        return 0;
    }
}