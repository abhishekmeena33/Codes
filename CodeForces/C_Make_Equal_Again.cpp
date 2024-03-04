#include <bits/stdc++.h>
#include <string>
#include <deque>
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
    ll n;
    cin >> n;
    vec hi(n);
    
    for(ll i=0; i<n; i++){
        cin >> hi[i];
    }

    ll a=0;
    ll b=n-1;

    while(a<n && hi[a]==hi[0]) a++;
    while(b>=0 && hi[b]==hi[n-1]) b--;

    //cout << "a=" << a << " b=" << b << endl;
    if(a==n) {
        cout << "0";
        return;
    }
    ll ans=INT64_MAX;
    if(hi[0]==hi[n-1]) {ans= b-a+1;}
    
    else{
        ans =min(ans, n-a);
        ans =min(ans, b+1);
    }
    cout << ans; 
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