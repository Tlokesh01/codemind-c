#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int oc = 0;
    int c = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x%2 == 1)oc++;
        if(x%2 == 1 && i%2 == 1)c++;
    }
    if(oc == c)cout << "True";
    else cout << "False";
}