#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int ind , int s, int n){
    if(ind == n)return s;
    return sum(arr, ind+1, s+arr[ind], n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
    }
    cout << sum(arr, 0, 0, n);
}