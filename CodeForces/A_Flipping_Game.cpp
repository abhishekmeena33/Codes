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
    ll n; cin>>n;

    
    vec a(n);
    ll one=0;
    
    vec b(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1) {one++;b[i]=-1;}
        else {b[i]=1;}
        //cout << b[i]<< " " ;
    }
    if(n==1) {cout << 1-a[0] ;return;}
    if(one == n) {cout << n-1;return;}
    
    vec s;
    ll sum=b[0];
    for(ll i=1; i<n; i++){
        if(sum<0) {sum=b[i];}
        else {sum+=b[i];}
        s.push_back(sum);
    }
    // for(int i=0; i<n; i++){
    //     cout << s[i] << " " ;
    // }
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    
    cout << s[0] + one ;

}

int main(){
    FAST
    solve();
    return 0;
}