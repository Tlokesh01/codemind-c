#include<bits/stdc++.h>
using namespace std;

bool fun(int n){
    int n1 = n;
    while(n > 0){
        int r = n%10;
        n = n/10;
        int n2 = n;
        while(n2 > 0){
            int r1 = n2%10;
            n2 = n2/10;
            if(r == r1)return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(fun(n))cout << "Unique Number";
    else cout << "Not Unique Number";
}