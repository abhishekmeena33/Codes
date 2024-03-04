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
    string str;
    cin >> str;

    if(str[0]>= 'a' && str[0]<='z') str[0]-=32;

    for(int i=1; i<str.size(); i++){
        if(str[i]<='Z') str[i]+=32;
    }
    cout << str;
}

int main(){
    FAST
    solve();
    return 0;
}