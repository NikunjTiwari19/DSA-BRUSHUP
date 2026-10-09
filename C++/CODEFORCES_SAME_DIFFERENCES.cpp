#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin >> t;
while(t--){

    int N;
    cin >> N;

    vector<int> a(N);
    for(int i = 0; i < N; i++)  cin >> a[i];
    
    map<int,int> mp;
    for(int i = 0;i < N; i++)   mp[a[i] - i]++;

    for(auto i:mp)  if(i.second > 1) cout << i.second - 1;
}
return 0;
    
}


