#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#define ll long long
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    ll n;
    cin>>n;
    map<ll,ll> m;
    for(int i =0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    ll ans = 0;
    ans += m[1]*m[2];
    for(auto x : m){
        ll a = x.second;
        ans += (a*(a-1))/2;
    }
    cout<<ans<<endl;

}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}