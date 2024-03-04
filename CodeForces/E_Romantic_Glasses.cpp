#include <iostream>
#include <vector>
#include <deque>
#include <map>
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
#define omk cout << "YES";
#define nah cout << "NO";
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
    vec a;

    map m;
    m[0]=1;
    
    ll o=0,e=0;
    for(int i=0; i<n;i++){
        ll x;cin >> x;
        a.pb(x);
        if(i%2!=0){a[i]*=-1;}
        else {o+=x;}
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];

        if(m[sum]){
            omk;
            return;
        }
        m[sum]++;
    }
    nah;
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