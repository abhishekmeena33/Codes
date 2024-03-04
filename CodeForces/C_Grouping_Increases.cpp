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
    ll n;
    cin>>n;
    vector <ll> a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    if(n==1 || n==2){
        cout<<0<<endl;
        return;
    }
    ll a1 = n+1;ll a2 = n+1;
    ll count = 0;
    for(int i =0;i<n;i++){
        if(a[i]<=a1 && a[i]<=a2){
            if(a1>a2)a2 = a[i];//hello
            else a1 = a[i];
        }
        else if(a[i]>a1 && a[i]>a2){
            if(a1>a2)a2 = a[i];
            else a1 = a[i];
            count++;
        }
        else if(a[i]>a1){
            a2 = a[i];
        }
        else a1 = a[i];
    }
    cout<<count<<endl;
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