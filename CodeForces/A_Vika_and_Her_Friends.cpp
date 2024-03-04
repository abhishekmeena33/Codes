#include <bits/stdc++.h>
#include <string>
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
    ll n,m,k;cin >> n >> m >> k;
    ll X,Y; cin >> X >> Y ;

    // vec x(k);
    // vec y(k);

    // bool yes=ff;
    // for(int i=0; i<k;i++) {
    //     cin >> x[i] >> y[i];

    //     if(x[i]==X && y[i]==Y) yes=tt;
    // }
    // if(yes) {cout << "NO"; return;}
    // ll dis=0;
    bool f = tt;
    for(ll i=0; i<k;i++){
        ll x,y;
        cin>>x>>y;
        if((abs(x-X)+abs(y-Y))%2==0)f = ff;
    }
     if(f)cout<<"YES";
    else cout<<"NO"; 
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