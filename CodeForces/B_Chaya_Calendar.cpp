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
    cin >> n;
    vec a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vec b(n,0);
    b[0]=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>b[i-1]) b[i]=a[i];
        else{
            b[i] = a[i] * ( b[i-1]/a[i] +1);
        }
    }
    cout << b[n-1];
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