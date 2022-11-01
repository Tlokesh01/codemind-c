#include<bits/stdc++.h>
using namespace std;

bool pal(int n){
    int n1 = n;
    int i = 0;
    while(n > 0){
        int r = n%10;
        i = i*10+r;
        n = n/10;
    }
    return i==n1;
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(pal(i))cout << i << " ";
    }
    // cout << "
";
}