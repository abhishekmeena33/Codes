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
    
    vector <int> a;
    
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    vector<int> diff(n-1);
    for(int i=0; i<n-1; i++){
        diff[i] = a[i+1]-a[i];
        cout << diff[i];
    }
    // sort(diff.begin(), diff.end());
    // int x =diff[0];
    // int s= a[n-1]-x;
    // for(int i=0; i<n; i++){
    //     if(a[i]==s){
    //         s=a[n-1]+x;
    //         break;
    //     }
    // }
    // a.push_back(s);
    // int cnt = 0;
    // sort(a.begin(), a.end());
    // for(int i=0; i<n+1; i++){
    //     cnt+= (a[n]-a[i])/x;
    // }
    // cout << cnt;
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