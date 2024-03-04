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
    ll n,k,x;
    cin>>n>>k>>x;
    ll a[n];
    ll sum = 0 ;
    for(int i =0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a,a+n);
    ll ans = LONG_MIN;
    ll count = 0;
    for(int i =n-1;i>=0;i--){
        if(count<x){
            sum -= 2*a[i];
            count++;
        }
        else break;
    }
    ans = max(ans,sum);
    ll j = n-1;
    ll i = n - 1 - x;
    while(i>=0 && k){
        sum += a[j];
        j--;
        k--;
        sum-=2 * a[i];
        i--;
        ans = max(ans,sum);
    }
    while(k--){
        sum += a[j];
        j--;
        ans = max(ans,sum);
    }
    cout<<ans;

return; 
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