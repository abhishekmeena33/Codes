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
    ll n;
    cin >>n ;
    
    if(n<=6){
        cout << "NO";
        return;
    }
    for(int i=1; i<=n-3; i++){
        for(int j=1; j<n-3-i;j++){
            if(i%3!=0 && j%3!=0 && (n-i-j)%3!=0 && i!=j && i!=(n-i-j) && j!=( n-i-j ) ){
                cout << "YES\n";
                cout << i << " " << j << " " << n-i-j ;
                return;
            }
        }
    }
    cout << "NO";
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