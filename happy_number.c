#include<bits/stdc++.h>
using namespace std;

bool ishappy(int n, int s){
    if(n == 0 && s > 4)return ishappy(s, 0);
    else if(n == 1 && s < 5)return true;
    else if(n == 4 && s < 5)return false;
    // if(n == 0 && s < 10 && s != 1)return false;
    return ishappy(n/10, s+((n%10)*(n%10)));
}


int happy(int n){
    int s = 0;
    while(n > 0 ){
        int r = n%10;
        s += (r*r);
        n = n/10;
        if(n == 0 && s > 4){
            n = s;
            s = 0;
        }
        // if(s == 1)return true;
        // return false;
    }
        return s;
    
}


int main() {
    int n;
    cin >> n;
    // cout << n << endl;
    if(happy(n) == 1)cout << "True";
    else cout << "False";
    // cout << ishappy(n,0);
    
}