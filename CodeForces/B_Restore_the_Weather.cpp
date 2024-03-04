#include <bits/stdc++.h>
#include <map>
#include <string>
#include <set>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector <pair<ll ,ll>>
#define mp make_pair
#define map map<ll,ll>
#define dd double
#define bb bool
#define ff false
#define tt true
#define all(x) x.begin(), x.end()

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
    ll n,k;
    cin >> n >> k;

    vecpair a;
    vecpair b;
    
    for(int i=0; i<n; i++) {ll x;cin >> x;a.pb(mp(x,i));}
    for(int i=0; i<n; i++) {ll x;cin >> x;b.pb(mp(x,i));}

    sort(all(a));
    sort(all(b));

    vec ans(n);
    for(int i=0;i<n;i++){
        ans[a[i].second]=b[i].first;
    }
    for(ll i:ans){
        cout << i << " ";
    }
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