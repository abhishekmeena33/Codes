#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; 
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k ;
        
        if(4*n - 2 <=k){
            cout << k/2 +1;
        }
        else cout << (k+1)/2;
        cout << "\n";
    }
}