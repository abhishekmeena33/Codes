#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n,a,q;
    cin >> n >> a >> q;
    string str; cin >>str;

    if(n==a){
        cout <<"YES\n";
        return;
    }
    int count =a;
    int x=0;
    for(int i=0;i<q;i++){
        if(str[i]=='+'){
            count +=1;
        }
    }
    cout << "NO\n"; 
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}