#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>v(n,0);
    cin >> n;
    set<int>s;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    for(auto it : s)cout << it << " ";
    
    
}