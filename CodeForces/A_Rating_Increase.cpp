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
    string str;cin >> str;

    string a="";
    string b="";
    int x=0;
    for(int i=0; i<str.length(); i++){
        if(i==0 || str[i]=='0') a+=str[i];
        else {x=i;break;}
    }

    
    for(int i=x; i<str.length(); i++){
        b+=str[i];
    }
    //cout << stoi(b) << endl;
    if(a==b) cout<<"-1";
    
    else if(stoi(a)<stoi(b))cout << stoi(a)<<" "<<stoi(b);
    else cout << "-1";
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