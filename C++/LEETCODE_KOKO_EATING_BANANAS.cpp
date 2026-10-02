#include <bits/stdc++.h>
using namespace std;

class Demo{
    public:
        bool isvalid(vector<int>& piles,int speed, int h){
            int requiredtime = 0;
            for(int i:piles){
                requiredtime += (i+ speed -1)/speed;
            }
            return( requiredtime <= h);

        }
};


int main(){
    Demo d;
    int n,h;
    cin >> n;
    cin >> h;
    vector<int> piles(n);
    for(int i = 0; i < n; i++) cin >> piles[i];
    int high = *max_element(piles.begin(),piles.end());
    int low = 1, ans = 0;
    while(low <= high){
        int speed = low + (high - low)/2;
        if(d.isvalid(piles,speed,h)){
            ans = speed;
            high = speed -1 ;
        } 
        else low = speed + 1;
    }
    cout << ans;
    
}


