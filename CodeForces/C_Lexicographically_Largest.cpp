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
    cin>>n;
    ll a[n];
    seti s;
    for(int i =0;i<n;i++){
        cin>>a[i];
        a[i] +=(i+1);
    }
    ll i = n-1;
    ll j = n-1;
    while(i>=0  ){
        while(a[i] == a[j])i--;
        for(int k = i+1;k<=j;k++){
            s.insert(a[k] + k - i - 1);
        }
        j = i;
    }
    vec v;
    for(auto x : s)v.pb(x);
    reverse(all(v));
    for(auto x : v)cout<<x<<" ";
    cout<<endl;

return; 
}


int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        
    }
    return 0;
}