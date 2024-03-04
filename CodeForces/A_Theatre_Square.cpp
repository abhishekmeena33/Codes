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
    ll n,m,a; cin >> n >> m >> a ;
    
    ll count =0;
    if(n*m <= a*a ) {cout << 1;return 0;}
    else if(a==1){cout << n*m; return 0;}
    while(n>0){
        if(n>=a){
            n-=a;
            count++;
        }
        else if(n<a){
            n=0;
            count++;
        }
    }
    m-=a;
    ll x= count;
    while(m>0){
        if(m>=a){
            m-=a;
            count+=x;
        }
        else if(m<a){
            m=0;
            count+=x;
        }
    }
    cout << count ;
}