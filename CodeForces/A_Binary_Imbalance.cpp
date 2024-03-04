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
    int n;cin >> n;
    string x; cin >> x;
    int cnt0=0;
    int cnt1=0;

    for(int i=0; i<n; i++){
        if(x[i]=='0'){
            cnt0++;
        }
        else{
            cnt1++;
        }
    }
    if(cnt0>cnt1){
        cout << "YES";
        return;
    }

    for(int i=0; i<n-1; i++){
        if(x[i]!=x[i+1]){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        cout<< "\n";
    }
    return 0;
}