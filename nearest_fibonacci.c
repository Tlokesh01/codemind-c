#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    while(b < n){
        int temp = a;
        a = b;
        b = temp+b;

    }
    if((n-a)<(b-n))cout << a << endl;
    else if((n-a)>(b-n))cout << b << endl;
    else cout << a << " "<< b<<endl;
}