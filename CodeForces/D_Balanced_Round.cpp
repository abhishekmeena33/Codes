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
    int n,k; cin >> n >> k;
    vector <int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(n==1){
        cout << "0" ;
        return;
    }
    sort(a.begin(), a.end());
    int x=1;
    vector < int> b;
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i]<=k){
            x++;
        }
        else{
            x=1;
        }
        b.push_back(x);
    }

    sort(b.begin(), b.end());
    cout << n-b[n-2];
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