#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    int g = __gcd(a,b);
    int p = a*b;
    cout << p/g;
}