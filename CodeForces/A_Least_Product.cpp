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
    ll n;
    cin >> n;

    vec a(n);
    ll chk=0;
    ll fck=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        
        if(a[i]<0) {
            chk++;
            
        }
        if(a[i]==0) {
            fck++;
        }
    }
    
    if(chk%2==0 && fck==0){
        cout <<"1\n1 0";
    }
    else cout << "0";
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