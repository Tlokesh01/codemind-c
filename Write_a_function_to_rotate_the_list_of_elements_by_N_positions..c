#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }int k;
    cin >> k;
    int r = k%v.size();
    for(int i = 0; i < k; i++){
        // int temp = v[0];
        // v[0] = v[v.size()-1];
        v.insert(v.begin(),v[v.size()-1]);
        v.pop_back();
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    
    
    
}