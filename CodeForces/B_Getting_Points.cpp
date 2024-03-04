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

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
////////////////////////////////////////////////////////////////////////////////////


void solve(){
    ll n,p,l,t;
    cin >> n >> p >> l >> t ;

    if(p<=l){
        cout << n-1;
        return ;
    }
    int days=0;
    if(n>(p/(2*t))){
        for(ll i=1;i<=n;i++){
        
        if((i-1)%7==0 && t>=l ){
            p-=2*t;
            p-=l;
            days++;
        }
        // else{
        //     p-=l;
        // }
        if(p<=0){
            cout <<n-days-1;
            return ;
        }
    }
    }
    for(ll i=1;i<=n;i++){
        
        if((i-1)%7==0 && t>=l ){
            p-=2*t;
            p-=l;
            days++;
        }
        else{
            p-=l;
        }
        if(p<=0){
            cout <<n-i+1;
            return ;
        }
    }
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}