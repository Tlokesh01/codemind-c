#include<bits/stdc++.h>
using namespace std;

bool pal(int n){
    int n1 = n;
    int i = 0;
    while(n > 0){
        int r = n%10;
        i = i*10 + r;
        n = n/10;
    }
    return n1 == i;
}

int npal(int n){
    if(pal(n))n++;
    while(!pal(n)){
        n++;
    }
    return n;
}

int ppal(int n){
    if(pal(n))n--;
    while(!pal(n)){
        n--;
    }
    return n;
}

int main(){
    int n;
    cin >> n;
    int pp = ppal(n);
    int np = npal(n);
    if(abs(pp-n)<abs(np-n))cout << pp;
    else if(abs(pp - n)>abs(np-n))cout << np;
    else cout << pp << " " << np;
}














