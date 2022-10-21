#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double d = sqrt(n);
    bool b = ((int)(d) == d);
    if(b)cout << "True";
    else cout << "False";
}