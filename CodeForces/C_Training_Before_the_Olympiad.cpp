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
#define vec vector <ll> ;
#define vec vector <long long> a;
#define pb(x) push_back(x)
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
    int n;cin >> n;
    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    vector <int> s(n);
    s[0] = v[0];
    
    ll odd=0;
    if(v[0]%2!=0) odd=1;

    ll sum=v[0];
    
    for(int i=1; i<n; i++){
        if(v[i]%2!=0) odd++;

        sum+=v[i];
        s[i]=sum;
        if(odd%2==0 && (i+1-odd)==0 ){s[i]-=odd/2;}
        else if(odd%2==1 ){
            s[i]-=odd%2 ;
        }
    }

    for(int i=0; i<n; i++){
        cout << s[i] << " ";
    }
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