#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    while(n > 2){
        int c = a+b;
        cout << c << " ";
        a = b;
        b = c;
        n--;
    }
}