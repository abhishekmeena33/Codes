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
    ll n; cin >> n; 
    // vector < int > ax;
    // int count = 1;
    // for(ll i=1; i<100;i++){
    //     if(n%i == 0 && n%(i+1) == 0){
    //         count++;
    //         ax.push_back(count);
    //     }
    //     if(n%i!=0) count=1;
    // }
    // int hi =1;
    // for(int i=0; i< ax.size();i++){
    //     hi = max(hi,ax[i]);
    // }
    // cout << hi ;
    for(int i=1; i<= 100;i++){
        if(n%i){
            cout << i-1 ;
            return;
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