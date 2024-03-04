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
#define for(i,z) for(ll i=0; i<z; i++)

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
    string s="";

    for(i,26){
        for(j,26){
            for(k,26){
                if(i+j+k==n-3){
                    cout << char('a' + i) << char('a' + j) << char('a' + k);
                    return;
                }
            }
        }
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