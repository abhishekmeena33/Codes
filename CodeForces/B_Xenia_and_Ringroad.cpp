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
    ll n,m;
    cin >> n >> m;
    vec a(m);
    ll M=m;
    ll ans=0;
    for(ll i=0;i<M;i++) cin >> a[i];
    ans+=a[0]-1;
    m--;
    for(ll i=1;i<M;i++) {
        if(m==0) break;
        
        if(a[i-1]>a[i]) {ans+=n-a[i-1] + a[i];m--;continue;}
        else{ans+=a[i]-a[i-1];m--;continue;}
    }
    cout << ans;
}

int main(){
    FAST
    solve();
    return 0;
}