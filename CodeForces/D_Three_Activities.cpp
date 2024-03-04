#include <bits/stdc++.h>
#include <string>
#include <deque>
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
#define all(z) z.begin(), z.end()
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
    ll n;cin  >> n;

    deque <ll> a;
    deque <ll> b;
    deque <ll> c;

    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        a.pb(x);
    }
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        b.pb(x);
    }
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        c.pb(x);
    }

    sort(all(a));
    sort(all(b));
    sort(all(c));

    ll count =0;
    ll chk =3;

    
    cout << count ;
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