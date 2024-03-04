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
    int n;
    cin >>n;
    string a,b,c;
    cin >> a >> b >> c ;

    for(int i =0;i<n;i++){
        if(a[i] == b[i]){
            if(a[i] != c[i]){
                cout<<"YES"<<endl;
                return;
            }
        }
        if(a[i] != c[i] && b[i] != c[i]){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";

    
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