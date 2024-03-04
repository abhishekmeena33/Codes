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
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans =a*b*c ;
    ans = max(ans,a+b+c);
    if(a!=1 && b!=1 && c!=1){
        ans = max(ans,(a+b)*c);
        ans = max(ans,(c+b)*a);
        //ans = max(ans,(a+c)*b);
    }
    else if(a==1 && b==1 && c==1){
        cout << 3;
        return;
    }
    else{
        if(a==1){
            ans = max (ans,(a+b)*c);
        }
        if(b==1){
            ans = max ((b+c)*a,(a+b)*c);
        }
        if(c==1){
            ans = max (ans,(c+b)*a);
        }
    }

    cout << ans ;
    return;
}

int main(){
    FAST
    solve();
    return 0;
}