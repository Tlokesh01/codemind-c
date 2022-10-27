#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++)ans *= i;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t > 0){
        t--;
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
}