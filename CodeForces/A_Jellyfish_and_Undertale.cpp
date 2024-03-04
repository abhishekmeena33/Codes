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
    ll a,b,n;
    cin >> a >> b >> n;
    vector < ll> x(n);
    for(ll i=0; i<n; i++){
        cin >> x[i];
    }
    sort(x.begin(),x.end());

    ll save =b;
    for(ll i=0; i<n; i++){
        if(x[i]<=a-1){
            save +=x[i];
        }
        else if(x[i]>a-1){
            save += a-1;
        }
    }
    cout << save << "\n";
}

signed main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}