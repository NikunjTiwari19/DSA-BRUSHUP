#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int left = 0, right = n-1;
    int sereja = 0,dima = 0;
    vector<int> cards(n);

    for(int i =0; i < n; i++) cin >> cards[i];
    while(left <= right){
        if(cards[left] < cards[right]){
            sereja  += cards[right];
            right--;
        }
        else{
            sereja += cards[left];
            left++;
        }
        if(left<=right){
            if(cards[left] < cards[right]){
                dima  += cards[right];
                right--;
            }
            else{
                dima += cards[left];
                left++;
            }

        }
        
        
    }
    cout << sereja << " " << dima;
}