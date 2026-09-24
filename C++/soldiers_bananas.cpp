#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,data;
    cin >> k >> n >> w;
    data = k*w*(w+1)/2;
    if(data > n){
        cout << data-n;
    }
    else{
        cout << 0;
    }
    return 0;
    
}