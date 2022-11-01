#include<bits/stdc++.h>
using namespace std;

bool pretty(int n){
    return(n%10 == 2 or n%10 ==3 or n%10 == 9);
}

int main() {
    int t;
    cin >> t;
    while(t > 0){
        t--;
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for(int i = a; i <=b; i++){
            if(pretty(i))ans++;
        }
        cout << ans << endl;
    }
}