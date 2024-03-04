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
    ll n,k;
    cin >> n >> k;

    string str;
    cin >> str;
    
    ll cntb=0;

    for(int i=0; i<n; i++){
        if(str[i]=='B') cntb++;
    }
    
    if(cntb == k){
        cout << 0 << "\n";
        return;
    }
    
    if(cntb<k){
        for(int i=0; i<n; i++){
            if(str[i]=='A'){
                cntb++;
            }
            if(cntb==k){
                cout << 1 << "\n";
                cout << i+1 << " B\n";
                return;
            }
            
        }
    }
    if(cntb>k){
        for(int i=0; i<n; i++){
            if(str[i]=='B'){
                cntb--;
            }
            if(cntb==k){
                cout << 1 << "\n";
                cout << i+1 << " A\n";
                return;
            }
            
        }
    }
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        
    }
    return 0;
}