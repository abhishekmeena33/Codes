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
        long long a,b;
        cin>>a>>b;
        ll s1=0;

        ll chk=0;
        if(a%2==0){
            s1=(b+a/2);
            if(a==s1);
            else{
                cout<<"Yes";
                return;
            }
        }
        if(b%2==0){
            s1=(a+b/2);
            if(b==s1);
            else{
                cout<<"Yes";
                return;
            }
        }
        cout<<"No";
        
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