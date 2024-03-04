#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
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
    ll n,f,a,b; cin >> n >> f >> a >> b;

    vec m;
    m.pb(0ll);
    for(int i=0;i<n;i++) {
        ll mi;
        cin >> mi;
        m.pb(mi);
    }

    for(int i=0;i<n;i++){
        ll x= min(b,(m[i+1]-m[i])*a);
        f-=x;
    }
    if(f<=0) cout<<"NO";
    else cout << "YES";
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