#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    while(a<n){
        int temp = a;
        a = b;
        b = temp+b;
    }
    if(n == a || n == b)cout << "True";
    else cout << "False";
}