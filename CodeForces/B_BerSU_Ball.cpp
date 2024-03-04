#include <bits/stdc++.h>
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
    ll n,m;

    cin >> n ;
    deque <ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    cin >> m;
    deque <ll> b(m);
    for(ll i=0; i<m; i++){
        cin >> b[i];
    }

    ll count=0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    if(m==1){
        for(int i=0;i<n;i++){
            if(abs(a[i]-b[0])<=1) {cout << 1;return;}
        }
 
    }
    if(n==1){
        for(int i=0;i<m;i++){
            if(abs(a[0]-b[i])<=1) {cout << 1;return;}
        }
        
    }

    while(!(a.empty() || b.empty())){
        
        //cout << a.front() << " " << b.front()<< endl ;
        if(abs(a.front() - b.front())<=1){
            a.pop_front();
            b.pop_front();
            count++;
        }
        else if(a.front() > b.front()) {
            b.pop_front();
        }
        else a.pop_front();
    }
    
    cout << count ;

}

int main(){
    FAST
    solve();
    return 0;
}