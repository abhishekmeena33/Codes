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
    ll s,n;
    cin >> s >> n;

    vecpair p;
    
    for(ll i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        p.pb(mp(x,y));
    }
    sort(p.begin(),p.end());
    ll count = 0;
    for(ll i=0;i<n;i++){
        if(s>p[i].first){
            s+=p[i].second;
            count++;
        }
        
    }
    if(count==n){cout << "YES";}
    else cout << "NO";
}

int main(){
    FAST
    solve();
    return 0;
}