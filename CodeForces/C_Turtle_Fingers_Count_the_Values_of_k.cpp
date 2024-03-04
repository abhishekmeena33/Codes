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
/*===========================================================================================*/

void solve(){
    ll a,b,l;
    cin >> a >> b >> l;

    cout << a << " " << b << " " << l ;
    vec v1(l/a);
    vec v2;
    v1[0]=1;
    v2[0]=1;
    // while(a<=l){
    //     v1.push_back(a);
    //     a*=a;
    // }
    // while(b<=l){
    //     v2.push_back(b);
    //     b*=b;
    // }
    
    // for(ll i=0; i<v1.size();i++){
    //     cout << v1[i]<<" ";
    // }
    // cout << endl;
    // for(ll i=0; i<v2.size();i++){
    //     cout << v2[i]<<" ";
    // }
    // set <ll> hi;
    // for(int i=0;i<v1.size();i++){
    //     for(int j=0;j<v2.size();j++){
    //         if(l%(v1[i]*v2[j])==0){
    //             hi.insert(l/(v1[i]*v2[j]));
    //         }
    //     }
    // }
    // cout << hi.size() ;
    
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