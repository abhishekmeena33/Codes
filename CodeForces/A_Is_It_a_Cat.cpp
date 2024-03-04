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
    ll n;
    cin >> n;

    string str1="meow";
    string str2="MEOW";

    string hi;
    cin >> hi;

    ll pos=0;
    for(int i=0;i<n;i++){
        if(hi[i]!='m' && hi[i]!='M' && hi[i]!='e'&& hi[i]!='E'&& hi[i]!='O'&& hi[i]!='o'&& hi[i]!='w'&& hi[i]!='W'){
            cout << "NO";
            return;
        }
        if(hi[i]== str1[pos] || hi[i]==str2[pos]){
            pos++;
        }
    }
    if(pos==4) cout << "YES";
    else cout << "NO";
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