#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int solve(){
    int a,b; cin >>a>>b;
    if(b-a>=2){
        return 1;
    }
    else return 0;
}

int main(){
    FAST
    int t; cin >> t;
    int room=0;
    while(t--){
        room+=solve();
    }

    cout << room;
    return 0;
}