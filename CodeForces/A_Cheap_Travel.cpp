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
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    double M = m;
    double B = b;
    if(a <= B/M)cout<<n*a<<endl;
    else {
        ll me = n/m;
        ll re = n%m;
        cout<<me*b + min(b,re*a)<<endl;
    }
    return 0;
}