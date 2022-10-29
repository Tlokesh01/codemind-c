#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 1;
    int i = 2;
    while(i*i <= n){
        if(n%i == 0 && i*i != n){
            sum += i;
            sum += n/i;
            // cout << sum << " ";
        }if(i*i == n)sum += i;
        i++;
    }
    // cout <<sum;
    if(sum == n)cout << "True";
    else cout << "False";
    
}