#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define vecpair vector<pair<ll,ll>> 
#define pb push_back
#define vpi vector <pair<ll ,ll>>
#define mp make_pair
#define map map<ll,ll>
#define dd double
#define bb bool
#define ff false
#define tt true

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*===========================================================================================*/

void solve(){
    ll n,k;cin >> n >> k;

    vec a(n);
    vec b(n);

    for(int i=0; i<n;i++) cin >> a[i];
    for(int i=0; i<n;i++) cin >> b[i];

    vecpair p;

    for(int i=0; i<n;i++){
        p.pb(mp(a[i],b[i]));
    }
    ll ans = 0;
    ll m = 0;
    ll w = 0;
    for(int i=0;i<min(n,k);i++){
        w += p[i].first;
        m = max(m,p[i].second);
        ans = max(ans,w+m*(k-(i+1)));
    }
    
    cout <<ans;

}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        cout <<"\n";
    }
    return 0;
}