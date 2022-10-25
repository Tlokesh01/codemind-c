#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int len = (int)(log10(n)+1);
    int last = n%((int)(pow(10,x)));
    int req = len-x;
    int first = n/(pow(10, req));
    cout << abs(first-last);
    
    
}