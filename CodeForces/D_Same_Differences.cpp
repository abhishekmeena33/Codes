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
    ll n;cin >> n;
    vec a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    //if(n==1){cout << 0 ; return;}
    vec b(n);
    ll count =1;
    for(ll i=0 ; i<n; i++){
        b[i] = a[i]-i-1;
    }
    sort(b.begin(), b.end());
    ll tot=0;
    bool got=ff;
    for(ll i=0 ; i<n; i++){
        // cout << b[i] << "=" ;
        // cout << count<<" " ;
        if(b[i] == b[i+1]) count++;
        else if(b[i] != b[i+1]){
            got=tt;
            tot+=(count*(count-1))/2;
            count=1;
        }
    }
    if(got){cout << tot ;}
    else {cout << ((count-2)*(count-1))/2;}
    
}

int main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve();
        cout <<"\n";
    }
    return 0;
}