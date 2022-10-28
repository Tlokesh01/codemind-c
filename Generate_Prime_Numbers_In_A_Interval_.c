#include<bits/stdc++.h>
using namespace std;

bool prime(int n, int i){
    if(n<2)return false;
    if(i*i > n)return true;
    if(n%i == 0)return false;
    return prime(n,i+1);
}

int main(){
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(prime(i,2))cout << i << endl;
    }
}