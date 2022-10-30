#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2)return false;
    int i = 2;
    while(i*i <= n){
        if(n%i == 0)return false;
        i++;
    }return true;
}

int nprime(int n){
    
    while(!prime(n))n++;
    return n;
}

int pprime(int n){
    
    while(!prime(n))n--;
    return n;
}



int main() {
    int t;
    cin >> t;
    while(t != 0){
        t--;
        int n;
        cin >> n;
        int pp = pprime(n);
        int np = nprime(n);
        if((n-pp)<=(np-n))cout << pp << endl;
        else cout << np << endl;
    }
}