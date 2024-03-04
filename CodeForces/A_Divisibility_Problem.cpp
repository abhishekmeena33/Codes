#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int a,b; cin >> a >> b;
    if(!(a%b)){cout << "0\n"; return;}
    cout << b -a %b << "\n";
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}