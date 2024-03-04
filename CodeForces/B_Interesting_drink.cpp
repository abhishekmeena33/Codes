#include <bits/stdc++.h>
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
    ll n;
    cin >> n;
    vec c;
    
    for(int i=0; i<n; i++) {
        ll x;
        cin >> x;
        c.pb(x);
    }
    sort(all(c));
    ll q;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        ll ans = upper_bound(c.begin(), c.end(),x)- c.begin();
        cout << ans<< endl;
    }

}

int main(){
    FAST
    solve();
    return 0;
}