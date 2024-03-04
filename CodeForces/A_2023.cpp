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
    ll n,k; cin >> n >> k ;

    vec a(n);
    ll p=1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        p*=a[i];
    }
    if(2023%p)cout<<"NO"<<endl;

    else {
        if(p==2023 && k==0){
            cout<<"YES"<<endl;
        }

        else {
            if(k==0)cout<<"NO"<<endl;
            else {
                cout<<"YES"<<endl;
                cout<<2023/p<<" ";
                for(int i =1;i<k;i++)cout<<1<<" ";
                cout<<endl;
            }
        }
    }

}

int main(){
    FAST
    int t; cin >> t;
    
    while(t--){
        solve();
        
    }
    return 0;
}