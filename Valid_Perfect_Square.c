#include<bits/stdc++.h>
using namespace std;

bool sq(int n){
    int s = 1;
    int e = n;
    while(s <= e){
        int m = s+(e-s)/2;
        if(m*m == n)return true;
        else if(m*m < n)s = m+1;
        else e = m-1;
    }return false;
}

int main(){
    int t;
    cin >> t;
    while(t > 0){
        t--;
        int n;
        cin >> n;
        if(sq(n))cout << "True" << endl;
        else cout << "False" << endl;
    }
}