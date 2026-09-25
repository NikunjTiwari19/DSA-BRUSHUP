/*
Petya has an array a
 consisting of n
 integers. He wants to remove duplicate (equal) elements.

Petya wants to leave only the rightmost entry (occurrence) for each element of the array. The relative order of the remaining unique elements should not be changed.

Input
The first line contains a single integer n
 (1≤n≤50
) — the number of elements in Petya's array.

The following line contains a sequence a1,a2,…,an
 (1≤ai≤1000
) — the Petya's array.

Output
In the first line print integer x
 — the number of elements which will be left in Petya's array after he removed the duplicates.

In the second line print x
 integers separated with a space — Petya's array after he removed the duplicates. For each unique element only the rightmost entry should be left.


*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> new_a;
    for(int i = 0; i < n; i++) cin >> a[i];
    int left = 0,right = 0;
    while(left < n){
        right = left+1;
        while(right < n && a[right] != a[left]){
            right++;
        }
        if(right == n){
            new_a.push_back(a[left]);
        }
        left++;
    }
    cout << new_a.size() << endl;
    for(int i = 0; i < new_a.size(); i++) cout << new_a[i] << " ";

}




























