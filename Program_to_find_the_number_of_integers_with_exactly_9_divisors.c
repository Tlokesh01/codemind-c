#include<bits/stdc++.h>
using namespace std;

bool F(int n){
    int c = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            c+=2;
            if(i == n/i)c--;
        }
    }
    return c==9;
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(F(i)){
            cout << i << " ";
            ans++;
        }
    }
    cout << endl << "Total=" << ans;
}