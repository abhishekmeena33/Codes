#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define omk cout <<"YES";
#define nah cout <<"NO";

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
    
    int n; cin >> n;
    int s[26];
    for(auto i{0};i<26;i++) s[i]=0;
    for(int i=0;i<n;i++){
        char c; cin >> c;
        s[c-'a']++;
    }

    int hi =0;
    for(int i=0;i<26;i++){
        hi =max(hi,s[i]);
    }

    if(2*hi-n>0){ cout << 2*hi-n; return;}

    if(n%2==0) {cout << "0";return;}

    else{cout << "1";}
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