#include<bits/stdc++.h>
using namespace std;

bool prime(int n, int i){
    if(n <= 1)return false;
    if(i*i > n)return true;
    if(n%i == 0)return false;
    return prime(n,++i);
}

int main(){
    int n;
    cin >> n;
    bool Flag = false;
    for(int i = 1; i*i < n; i++){
        if(n%i == 0 && prime(i, 2) && prime(n/i,2)){
            cout << i << " " << n/i << endl;
            Flag = true;
            break;
        }
    }if(Flag == false)cout << -1; 
    
}