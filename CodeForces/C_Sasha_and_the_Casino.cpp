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

void solve() {
    ll k, x, a;
    cin >> k >> x >> a;

    ll cnt=1;
    vec v(x+1);
    v[0]=1;
    for(int i=1;i<x+1;i++) {
        v[i] = cnt/(k-1) +1;
        cnt +=  v[i];
        if(cnt >a){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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