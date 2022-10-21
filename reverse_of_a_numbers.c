#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    int n;
    cin >> n;
    while(n > 0){
        int r = n%10;
        i = i*10+r;
        n = n/10;
    }
    cout << i;
}