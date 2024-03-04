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
////////////////////////////////////////////////////////////////////////////////////


void solve(){
    int n; cin >> n;
    vector < int > d(n);
    vector < int > s(n); 

    for(int i=0; i<n; i++){
        cin >> d[i];
        cin >> s[i];
    }
    vector < int > k;

    for(int i=0; i<n; i++){
        int temp;
        temp = d[i]+ (s[i]-1)/2;
        k.push_back(temp);
    }

    sort(k.begin(), k.end());
    
    cout << k[0];
    
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