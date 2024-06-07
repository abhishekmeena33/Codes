//░██████╗░█████╗░███╗░░░███╗░██████╗░█████╗░███╗░░░███╗██╗░░░██╗██████╗░░█████╗░██╗██████╗░██████╗░
//██╔════╝██╔══██╗████╗░████║██╔════╝██╔══██╗████╗░████║██║░░░██║██╔══██╗██╔══██╗██║╚════██╗╚════██╗
//╚█████╗░███████║██╔████╔██║╚█████╗░███████║██╔████╔██║██║░░░██║██████╔╝███████║██║░█████╔╝░█████╔╝
//░╚═══██╗██╔══██║██║╚██╔╝██║░╚═══██╗██╔══██║██║╚██╔╝██║██║░░░██║██╔══██╗██╔══██║██║░╚═══██╗░╚═══██╗
//██████╔╝██║░░██║██║░╚═╝░██║██████╔╝██║░░██║██║░╚═╝░██║╚██████╔╝██║░░██║██║░░██║██║██████╔╝██████╔╝
//╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═════╝░╚═════╝░
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
    ll n, t;
    cin >> n >> t;
    ll mul=1;
    for(ll i = pow(10,n-1); i< pow(10,n); i+=mul){
        if(i%t==0){
            cout << i;
            return;
        }
        mul*=2;
    }
    cout << "-1";
}

int main(){
    FAST
    solve();
    return 0;
}                          