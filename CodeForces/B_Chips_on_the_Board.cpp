#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
////////////////////////////////////////////////////////////////////////////////////


void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i=0; i<n; i++){
        cin >> a[i];
    }
    for (ll i=0; i<n; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll sum_a=0,sum_b=0;
    for(ll i=0; i<n; i++){
        sum_a+=a[i]+b[0];
    }
    
    for(ll i=0; i<n; i++){
        sum_b+=a[0]+b[i];
    }
    ll sum = sum_a < sum_b ? sum_a : sum_b;
    cout << sum << "\n";
}

int main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}