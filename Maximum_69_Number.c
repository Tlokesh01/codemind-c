#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    int i = 0;
    while(n > 0){
        int r = n%10;
        i = i*10 + r;
        n = n/10;
    }
    return i;
}


int main(){
    int n;
    cin >> n;
    int i = 0;
    int c = 0;
    int re = rev(n);
    while(re > 0){
        int r = re%10;
        if(r == 6)c++;
        if(c == 1 and r == 6)r=9;
        i = i*10 + r;
        re = re/10;
    }
    cout << i;
}