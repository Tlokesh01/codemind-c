#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }map<int,int>mp;
    
    for(auto it : v) {
        mp[it]++;
    }int c,s;
    c=0;
    s = 0;
    for(auto it : mp){
        if(it.first == it.second) {
            c++;
            s+=it.first;
        }
    }double ans = (double)(s)/(double)(c);
    if(c == 0){
        cout << -1;
    }
    else{
        cout << setprecision(2) << fixed;
        cout << ans;
    }
}