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
    
    ll n;
    cin >> n;

    ll ans=0;
    while(n--){
        string str;
        cin >> str;

        if(str=="Tetrahedron") ans+=4;
        else if(str=="Cube") ans+=6;
        else if(str=="Octahedron") ans+=8;
        else if(str=="Dodecahedron") ans+=12;
        else if(str=="Icosahedron") ans+=20;

    }
    cout << ans ;
}

int main(){
    FAST
    solve();
    return 0;
}