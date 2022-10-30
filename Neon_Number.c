#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = n*n;
    int sum = 0;
    while(s > 0){
        int r = s%10;
        sum += r;
        s = s/10;
    }
    if(sum == n)cout << "Neon Number";
    else cout << "Not Neon Number";
}