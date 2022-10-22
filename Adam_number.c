#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    int i = 0;
    while(n > 0){
        int r = n%10;
        i = i*10 + r;
        n = n /10;
        
    }
    return i;
}

int main(){
    int n;
    cin >> n;
    int s = n*n;
    int r = rev(n);
    int rs = r*r;
    if(rev(rs) == s)cout << "True";
    else cout << "False";
}