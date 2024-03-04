#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define omk cout <<"YES";
#define nah cout <<"NO";
int digit_sum(int n) {
    ll sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*===========================================================================================*/

int main(){
    FAST

    ll m,n;
    cin >> n;
    vector <ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    
    cin >> m;
    vector <ll> q(m);
    for(ll i=0; i<m; i++){
        cin >> q[i];
    }
    
    ll sum=0;
    vector <ll> x(n);

    for(ll i=0; i<n; i++){
        sum += a[i];
        x[i] = sum;
    }
    
    ll j=0;
    
    while(m--){
        int l=0,r=n-1;
        while(l<=r){
            int mid =(l+r)/2;
            
            if(q[j] <=x[0]) {cout << 1 << "\n";break;}
            else if(x[mid-1]<q[j] && q[j]<=x[mid]) {cout << mid+1 << "\n";break;}

            else if(x[mid]>q[j] && q[j]<x[mid+1]){
                r=mid;
            }
            else if(x[mid-1]<q[j] && q[j]>x[mid]){
                l=mid+1;
            }
            
        }
        j++;
    }
}