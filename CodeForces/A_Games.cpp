#include <bits/stdc++.h>
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
    ll n; cin>> n;
    vec h(n);
    vec a(n);

    for(int i=0; i<n; i++) {
        cin >> h[i] >> a[i];
    }
    ll count =0;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(h[i]==a[j]) count++;
        }
    }
    cout << count ;
}

int main(){
    FAST
    solve();
    return 0;
}