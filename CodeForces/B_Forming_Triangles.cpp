#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define omk cout <<"YES";
#define nah cout <<"NO";
ll digit_sum(ll n) {
    ll sum = 0;
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
    vector<ll> a(n);
    vector <ll> b(n+1,0);
    for(ll i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
        b[temp]++;  

    }

    ll count = 0;
    ll ans=0;
    
    for(int i=0; i<=n;i++){
        ans += (b[i] * (b[i] - 1) / 2) * count;
        ans += (b[i] * (b[i] - 1) * (b[i] - 2) / 6);
        count += b[i];
    }
    cout << ans;
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