#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> a;
    for(int i =0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(make_pair(x,i));
    }
    sort(a.begin(),a.end());
    ll ans[n];
    ll c  =n;
    
    for(int i=0;i<n;i++){
        ans[a[i].second] = c;
        c--;
    }
    for(int i =0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}