#include <bits/stdc++.h>
#include <vector>
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
    

    vector <string> str(3);

    for(int i=0;i<3;i++) cin >> str[i] ;
    
    for(int i=0;i<3;i++) {
        if(str[i][0]==str[i][1] && str[i][1]==str[i][2] && str[i][0]!='.'){
            cout << str[i][0] ;
            return;
        } 
    }
    for(int i=0;i<3;i++) {
        if(str[0][i]==str[1][i] && str[1][i]==str[2][i] && str[0][i]!='.'){
            cout << str[0][i] ;
            return;
        } 
    }
    if(str[0][0]==str[1][1] && str[1][1]==str[2][2] && str[0][0]!='.'){
        cout << str[0][0];
        return;
    }
    else if(str[2][0] == str[1][1] && str[1][1]==str[0][2] && str[2][0]!='.'){
        cout << str[2][0];
        return;
    }
    cout <<"DRAW";

}

int main(){
    FAST
    ll t;
    cin >> t;
    while(t--){
        solve();
        cout <<"\n";
    }
    
    return 0;
}