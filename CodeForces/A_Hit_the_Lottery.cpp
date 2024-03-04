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
    ll n;cin >>n;

    ll count=0;
    while(n>0){
        if(n>=100) n-=100;
        else if(n>=20) n-=20;
        else if(n>=10) n-=10;
        else if(n>=5) n-=5;
        else if(n>=1) n-=1;
        count++;
    }

    cout << count ;
}

int main(){
    FAST
    solve();
}