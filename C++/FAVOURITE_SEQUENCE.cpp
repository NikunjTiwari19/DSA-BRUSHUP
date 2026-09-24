#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin >> t;
while(t--){
int n;
vector<int> new_a;
cin >> n;
vector<int> a(n);
int left = 0, right = n-1;
for(int i = 0;i<n;i++){
cin >> a[i];
}

while(left<=right){
new_a.push_back(a[left]);
left++;
if(left<=right){
new_a.push_back(a[right]);
right--;
}
}
for(int i =0;i<n;i++){
  cout << new_a[i] << " ";
}
cout << endl;
}
}