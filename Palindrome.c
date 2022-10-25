#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n1 = n;
    int i = 0;
    while(n > 0){
        int r = n%10;
        i = i*10 + r;
        n = n/10;
    }
    if(i == n1)cout << "True";
    else cout << "False";
}