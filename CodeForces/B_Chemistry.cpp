#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve(){
    ll n,k; cin >> n >> k;
    
    string s; cin >> s;
    vector <ll> v(26);
    for(ll i=0; i<26; i++){
        v[i]=0;
    }
    for(ll i=0; i<s.size(); i++){
        v[s[i]-'a']++;
    }
    ll count=0;
    for(ll i=0; i<26; i++){
        if(v[i]%2) {count++;}
    }
    if(k>=count){
        cout << "YES\n";
        return;
    }
    else {
        ll d=count-k;
        if(d==1){
            cout << "YES\n";
            return;
        }
        cout << "NO\n";
        return;
    }
    
}

signed main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}