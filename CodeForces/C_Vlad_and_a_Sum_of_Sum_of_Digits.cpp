#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>

/*===========================================================================================*/

ll solve2(ll n, ll a[]) 
{ 
    if (n < 10) 
        return (n * (n + 1) / 2); 
     
    ll d = (ll)(log10(n)); 
    ll p = (ll)(ceil(pow(10, d))); 
    ll abhi = n/p; 
     
    return (abhi * a[d] + (abhi * (abhi - 1) / 2) * p + abhi * (1 + n % p) + solve2(n % p, a)); 
} 
 

void solve1() 
{ 
    ll n;
    cin >> n;

    ll d = (ll)(log10(n)); 
    ll a[d + 1]; 
    a[0] = 0; a[1] = 45;
     
    for(ll i = 2; i <= d; i++) 
        a[i] = a[i - 1] * 10 + 45 * 
               (ll)(ceil(pow(10, i - 1))); 
 
    cout << solve2(n, a); 
}

int main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve1();
        cout <<"\n";
    }
    return 0;
}