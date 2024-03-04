#include <bits/stdc++.h>
#include <string>
#include <deque>
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
    ll n,m;cin >> n >> m;

    deque <ll> a(n);
    deque <ll> b(m);

    
    for(ll i=0; i<n;i++){cin >> a[i];}
    for(ll i=0; i<m;i++){cin >> b[i];}

    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());

    ll d=0;
    for(int i=0;i<n;i++){
        if(abs(a.front()-b.front())>=abs(a.back()-b.back())){
            d+=abs(a.front()-b.front());
            a.pop_front();
            b.pop_front();
        }
        else {
            d+=abs(a.back()-b.back());
            b.pop_back();
            a.pop_back();
        }
    }
    cout << d;
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