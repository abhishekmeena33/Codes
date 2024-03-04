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
    ll n; cin >> n;
    vec arr;
    for(ll i=0; i<n; i++){
        ll x;cin >> x;
        arr.pb(x);
    }
    
    for(ll i=0; i<n-1; i++){
        if(arr[i] >arr[i+1] && i!=0 && i!=1 && i!=3 && i!=7 && i!=15 && i!=31){
            cout << "NO";
            return;
        }
    }
    cout << "YES" ;
 
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