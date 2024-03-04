#include <iostream>
#include <algorithm>
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
    ll n,k,x;
    cin >> n >> k >> x;
    //if(x<n && k==1){ cout << "YES\n"; return;}
    ll high=0,low=0;
    low=k*(k+1)/2;
    high = n*(n+1)/2 -(n-k+1)*(n-k)/2;
    //cout << high << " " << low;
    if(x>=low && x<=high){
        cout << "YES";
        return;
    }
    cout << "NO";
}

int main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}