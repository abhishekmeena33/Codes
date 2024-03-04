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
    ll y,x; cin >> y >> x;

    if(y==x){
        cout << y*y - x + 1;
        return;
    }
    
    if(y%2==0 && y>x){
        cout << y*y - x + 1;
        return;
    }
    else if(y%2==1 && y>x){
        cout << (y-1)*(y-1) + x ;
        return;
    }
    else if(x%2==1 && y<x){
        cout << x*x - y + 1;
        return;
    }
    else if(x%2==0 && y<x){
        cout << (x-1)*(x-1) + y ;
        return;
    }
    
    return;
}

int main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve();
        cout <<"\n";
    }
    return 0;
}