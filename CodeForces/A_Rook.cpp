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
////////////////////////////////////////////////////////////////////////////////////


void solve(){
    string pos; cin >> pos;

    for(int i=1; i<=8;i++){
        if(i==(int)pos[1]-48){
            continue;
        }
        cout << pos[0] << i;
        cout << "\n";
    }
    char str='a';
    for(int i=0; i<8;i++){
        if(i+97==(int)pos[0]){
            continue;
        }
        cout << (char)(str+i) << pos[1];
        cout << "\n";
    }
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        
    }
    return 0;
}