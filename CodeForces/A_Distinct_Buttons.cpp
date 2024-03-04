#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector <pair<ll ,ll>>>
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
    ll n;cin >> n;

    ll x1=0,y1=0,x2=0,y2=0;

    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;

        if(x>0) x1++;
        else if(x<0) x2++;
        if(y>0) y1++;
        else if(y<0) y2++;
    }
     if(x1 && x2 && y1 && y2){cout << "NO";}
     else cout << "YES";
    
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