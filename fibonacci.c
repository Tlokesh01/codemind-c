#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int c = 2;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    while(c < n){
        int temp = a;
        a = b;
        b = temp+b;
        cout << b << " ";
        c++;
    }
    
}