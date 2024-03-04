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
    ll n;cin >> n;

    vec a(n);
    ll sum=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    ll count=0;
    ll hi=sum/n;
    
    if(a[0]< hi){
        cout << "NO";
        return;
    }
    
    for(int i=0; i<n; i++){
        
        if(a[i]>hi){//4
            count += a[i]-hi;//1+2
            
        }
        else{
            count-= hi-a[i];//0
           
            if(count < 0){
                cout << "NO";
                return;
        }
        }
    }
    
    if(count == 0) cout << "YES";
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