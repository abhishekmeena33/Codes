#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n; cin >> n;
    if(n%3==0){
        cout << "Second\n";
    }
    else cout << "First\n";
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}