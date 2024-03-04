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
#define scan(x,n) for(ll i = 0; i < n; i++) cin >> x[i];

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*==========================================================================================================================*/

void solve(){
    ll n;
    cin >> n;

    vec a(n);
    scan(a,n);

    ll count = 0;

    for(int i = 0; i < n-1; i++){
        if(a[i]==1 && a[i+1]==0){
            int j=i+1;
            while(a[j]==0) {j++;}
            if(j>=n-1 && a[n-1]==0) break;
            else count+=j-i-1;
        }
    }
    cout << count ;
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