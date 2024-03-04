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

int main(){
    FAST
    ll n; cin >> n;

    vector<ll> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll count = 0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            count+=a[i]-a[i+1];
            a[i+1]+=a[i]-a[i+1];
        }
    }

    cout <<count ;
    return 0;
}