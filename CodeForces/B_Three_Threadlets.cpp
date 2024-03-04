#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll s = a+b+c;
    ll m = min({a,b,c});
    if(a%m == 0 && b%m==0 && c%m == 0){
        ll s  = (a/m - 1) + (b/m - 1) + (c/m - 1);
        if(s>3)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }  
    else cout<<"NO"<<endl;
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}