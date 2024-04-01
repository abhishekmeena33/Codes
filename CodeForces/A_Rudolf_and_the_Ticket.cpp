#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define scan(x,n) for(ll i = 0; i < n; i++) cin >> x[i];
int main(){
    FAST
    int t; cin >> t;
    while(t--){
            ll n,m,k;
    cin >> n >> m >> k;

    ll count =0;

    vec a(n);
    scan(a,n);
    vec b(m);
    scan(b,m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]+b[j] <= k){
                count++;
            }
        }
    }
    cout << count << "\n" ;
    }
    return 0;
}                          