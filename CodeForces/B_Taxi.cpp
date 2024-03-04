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
    ll f=0;
    ll th=0;
    ll tw=0;
    ll o=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==4)f++;
        else if(a[i]==3)th++;
        else if(a[i]==2)tw++;
        else if(a[i]==1) o++;
    }
    ll ans=f;
    
    cout << f 

}

int main(){
    FAST
    solve();
    return 0;
}