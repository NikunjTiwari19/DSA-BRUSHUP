#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
bool isvalid(ll h,const vector<ll>& a,ll x){
    ll water = 0;
    for(int i = 0; i < a.size(); i++){
        if(h > a[i]){
            water += (h - a[i]);
            if(water > x) return false;
        } 
    }
    return water <= x;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll low = 1;
        ll high = 1e15;
        ll ans = 1;
        while(low <= high){
            ll h = low + (high-low)/2;
            if(isvalid(h,a,x)){
                ans = h;
                low = h + 1;
            }
            else {
                high = h - 1;
            }
        }
        cout << ans << " ";
    }
    return 0;
}