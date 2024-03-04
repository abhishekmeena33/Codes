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
    ll n; cin >>n;
    vector < ll > v(n);
    int one= 0;
    ll sum=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==1) one++;
        sum+= v[i]-1;
    }

    if(n==1 || sum < one){
        cout << "NO";
        return;
    }

    
    
    cout<< "YES";

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