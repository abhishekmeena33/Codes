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

vector<int> fun(int n){
    vector<int> divs;
    for(int i{1}; i<=sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i){
                divs.push_back(i);
            }
            else {
                divs.push_back(i);
                divs.push_back(n/i);
            }
        }
    }
    return divs;
}

/*===========================================================================================*/

void solve(){
    
    int n; cin >> n;
    vector<int> a(n);
    for(int i{0}; i<n; i++) cin >> a[i];
    vector<int> div = fun(n);
    sort(div.begin(),div.end());
    int ans{1};
    for(int i{0}; i<div.size()-1; i++){
        map<int,vector<int>> m;
        int count{0};
        for(int j{1};j<=n;j++){
            if(count+1>div[i]){
                count = 0;
            }
            m[count+1].push_back(a[j-1]);
            count++;
        }
        int num{0};
        for(auto k: m){
            int lund{0};
            sort(k.second.begin(),k.second.end());
            for(int j{1};j<k.second.size(); j++){
                int diff = k.second[j] - k.second[j-1];
                lund = __gcd(lund,diff);
            }
            num = __gcd(num,lund);
        }
        if(num != 1) ans++;
    }
    cout << ans ;
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