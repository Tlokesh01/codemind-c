#include<bits/stdc++.h>
using namespace std;

int Fun(int n){
    if(n <= 2)return n;
    if(n == 3)return 4;
    return Fun(n-1)+Fun(n-2)+Fun(n-3);
}

int main(){
    int n;
    cin >> n;
    cout << Fun(n);
}