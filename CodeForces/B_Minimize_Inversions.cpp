#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vpi vector <pair<ll ,ll>>
#define mp make_pair
#define mapa map<ll,ll>
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
    ll n;cin >> n;
    vec a(n);
    vec b(n);
    
    mapa mp;

    for(int i=0; i<n; i++) {cin >> a[i];} 
    for(int i=0; i<n; i++) {cin >> b[i];}

    for(int i=0;i<n;i++){
        mp.insert({a[i],b[i]});
    } 

    vec x(n+1,0);
    
    for(auto itr = mp.begin(); itr != mp.end(); ++itr){
        x[itr->first] = itr->second;
    }
    
    for(int i=1; i<=n;i++) {
        cout << i <<" ";
    }
    cout << endl;
    for(int i=1; i<=n; i++){
        cout << x[i] << " " ;
    }
    
    
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