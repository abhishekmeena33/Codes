#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector <pair<ll ,ll>>>
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
    
    int x=3;
    while(x--){
        string x;
        bb A=ff;
        bb B=ff;
        bb C=ff;
        cin >> x;
        for(int i=0; i<3;i++){
            if(x[i]=='A') A=tt;
            if(x[i]=='B') B=tt;
            if(x[i]=='C') C=tt;

            if(i==2){
                if(A==ff) {cout << 'A';return;}
                else if(B==ff) {cout << 'B';return;}
                else if(C==ff) {cout << 'C';return;}
            }
        }
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