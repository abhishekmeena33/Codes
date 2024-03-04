#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector <pair<ll ,ll>>>
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
    ll n;cin >> n;

    vec a(n);
    ll x=0;
    ll mn=INT_MAX;
    ll sum=0;
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]<=0) x++;
        mn=min(mn,abs(a[i]));
        sum+=abs(a[i]);
    }

    if(x%2==0) cout <<sum;
    else cout << sum-2*mn;
    
    
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