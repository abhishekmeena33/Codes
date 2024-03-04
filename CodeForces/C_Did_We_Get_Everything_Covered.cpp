#include <bits/stdc++.h>
#include <string>
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
    ll n,k,m; cin >> n >> k>>m;

    string s; cin >> s;

    double hi = (float)m/(float)k;
    sort(s.begin(),s.end());

    ll count = 1;
    char fck;
    bool yo=false;
    
    ll yoyo=1;
    for(int i=0;i<m;i++) {
        
        if(s[i]==s[i+1]){
            yoyo++;
            fck=s[i];
            count++;
        }
        else if(s[i]!=s[i+1] && count>=hi){
            count=1;
            
        }
        else if(s[i]!=s[i+1] && count <hi){
            yo=true;
            fck=s[i];
            break;

        }
    }
    //cout << yoyo << endl;
    if(yo){
        cout << "NO\n";
        for(int i=0;i<k;i++) {
            cout << fck;
        }
    }
    else if(yoyo==m){
        cout << "NO\n";
        for(int i=0;i<k;i++) {
            cout << (char)((int)fck +1);
        }
    }
    else{
        cout << "YES";
    }

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