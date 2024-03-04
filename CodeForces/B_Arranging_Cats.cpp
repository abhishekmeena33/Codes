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
    ll n;cin >>n;

    string s;cin>>s;
    string f;cin>>f;

    ll S=0,F=0;
    for(int i=0;i<n;i++){
        if(s[i]==f[i]) continue;
        else if(s[i]=='0' && f[i]=='1') S++;
        else if(s[i]=='1' && f[i]=='0') F++;

    }
    cout << max(S,F); 
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