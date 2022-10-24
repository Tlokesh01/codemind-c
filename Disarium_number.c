#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int n1 = n;
    int len = log10(n)+1;
    int ans = 0;
    while(len > 0){
        int r = n%10;
        ans += pow(r,len);
        n = n/10;
        len--;
    }
    if(ans == n1)cout << "True";
    else cout << "False";
}