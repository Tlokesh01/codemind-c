#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n,0);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int cm = 0;
    int gm = INT_MIN;
    for(int i = 0; i < n; i++){
        cm += v[i];
        if(v[i] > cm)cm = v[i];
        if(cm > gm)gm = cm;
    }
    cout << gm ;
    
}