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
    string str;
    cin >> str;

    ll one=0;
    
    for(int i=0; i<str.length(); i++) {
        if(str[i]=='1') one++;
    }
    ll zero=str.length()-one;
    

    ll i=0;
    string hi="";
    while(one>=0 && zero>=0){
        if(str[i]=='1' && zero==0) break;
        if(str[i]=='0' && one==0) break;
        if(str[i]=='1' && zero>0) {zero--;hi+="0";}
        else if(str[i]=='0' && one>0) {one--;hi+="1";}
        i++;
    }

    cout << str.length()-hi.length();

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