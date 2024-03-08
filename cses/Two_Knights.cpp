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
    ll k; cin >> k;
    
    cout << 0 << "\n";
    for (ll n = 2; n <= k; n++) {
        ll total = n*n*(n*n-1)/2;
        ll attack = 4*(n-1)*(n-2);
        cout << total - attack << "\n";
    } 
    return 0;
}