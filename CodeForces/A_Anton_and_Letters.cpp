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
    
    string ans="";
    
    vec count(27,0);
    while(cin >> ans){
        for(int i=0; i<ans.size(); i++){
            if(ans[i] >= 'a' && ans[i] <= 'z'){
                count[ans[i]-'a'+1]++;
            }
        }
    }
    ll sum=0;
    for(int i=0; i<count.size(); i++){
        if(count[i]>0) sum++;
    }
    cout << sum;
    
}
int main(){
    FAST
    solve();
    return 0;
}