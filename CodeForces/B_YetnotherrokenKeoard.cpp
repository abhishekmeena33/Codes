#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define cr vector<char>
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
    string str;cin >> str;

    vec low;
    vec up;

    ll n=str.length();
    
    for(int i=0; i<n; i++) {//
        
        if(islower(str[i]) && str[i]!='b' ) {low.push_back(i);continue;}//2 6 7 9 11
        else if(isupper(str[i]) && str[i]!='B') {up.push_back(i);continue;}//0 1
        
        if(str[i]=='b' && !low.empty()){
            
            str[low.back()]='0';
            low.pop_back();
            
        } 
        else if(str[i]=='B' && !up.empty()){
            
            str[up.back()]='0';
            up.pop_back();
            
        }
        if(str[i]=='b' || str[i]=='B') {str[i] ='0';}
    }

    for(int i=0; i<str.size(); i++) {
        if(str[i]=='0') continue;

        cout << str[i] ;
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