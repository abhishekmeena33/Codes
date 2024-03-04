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
        ll  n;
        cin>>n;
        ll a = n%2 + 1;
        ll b = n;
        for(int i =0;i<n;i++){
            if(i%2==0){
                cout<<b<<" ";
                 b-=2;
            }
            else {
                cout<<a<<" ";
                a+=2;
            }
        }
        cout<<endl;

return; 
}


int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        
    }
    return 0;
}