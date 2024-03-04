#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve(){
    int n;cin >> n;
    string str;
    cin >> str;
    
    int x=0,y=0;
    for(int i=0; i<n; i++){
        if(str[i] == 'A'){
            x=i;
            break;
        }
        if(i==n-1){
            cout << "0";
            return;
        }
    }
    if(str[n-1]=='B'){
        cout << n-x-1 ;
        return;
    }
    for(int i=n-1; i>=0; i--){
        if(str[i] == 'B'){
            y=i;
            // cout << n << "=n ";
            // cout << y << "=y ";
            break;
        }
    }
    if(y-x < 0){
        cout <<"0" ;
        return ;
    }
    cout << y-x;
    return ;
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}