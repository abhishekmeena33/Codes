#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n,m;
    cin >> n >> m ;
    string x,s;
    cin >> x >> s ;
    
    if(n>=m){
        if(x.find(s) < n){
            cout << "0\n";
            return;
        }

        else if((x+x).find(s)< n){
            cout <<"1\n";
            return;
        }
    }
    else {
        for(int i=0;i<7;i++){
            if(x.find(s) <= 10000){
                cout << i << "\n";
                return;
            }
            x+=x;
        } 
    }
    cout <<"-1\n";
    return;
}

int main(){
    FAST
    int t; cin >> t;
    int count =0 ;
    while(t--){
        solve();
    }
    return 0;
}