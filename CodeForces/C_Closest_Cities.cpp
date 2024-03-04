#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector<pair<ll ,ll>>
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
    int n;
    cin >> n;

    vec a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int m;
    cin >> m;

    vecpair p;
    for(int i=0; i<m; i++){
        ll tempa;cin >> tempa;
        ll tempb;cin >> tempb;

        p.pb(mp(tempa, tempb));
    }

    vec pre;
    vec suf;

    pre.pb(1);
    suf.pb(1);
    int sum =1;
    for(int i=1; i<n-1; i++){
        if(a[i+1]-a[i] > a[i]-a[i-1]){
            //cout << a[i+1]-a[i] << " ";
            sum+=a[i+1]-a[i];
            pre.pb(sum);
        }
        else {
            sum++;
            pre.pb(sum);}
    }
    sum=1;
    for(int i=n-2; i>=1; i--){
        if(a[i]-a[i-1] > a[i+1]-a[i]){
            sum+=a[i]-a[i-1];
            suf.pb(sum);
        }
        else {sum++; suf.pb(sum);}
    }
    // for(int i=0 ; i<pre.size() ; i++){
    //     cout << pre[i]<< " ";
    // }
    // cout << endl;
    // for(int i=0 ; i<suf.size() ; i++){
    //     cout << suf[i]<< " ";
    // }
    // cout << endl << endl;
    for(int i=0 ; i<m ; i++){
        if(p[i].first < p[i].second){
            if(p[i].first==1){
                cout << pre[p[i].second-2] << "\n";
            }
            else{
                cout << pre[p[i].second-2] -pre[p[i].first-2] << "\n";
            }
        }
        else if(p[i].first > p[i].second){
            if(p[i].first==n){
                cout << suf[n-p[i].second-1] << "\n";
            }
            else{
                cout << suf[n-p[i].second-1] - suf[n-p[i].first-1] << "\n";
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