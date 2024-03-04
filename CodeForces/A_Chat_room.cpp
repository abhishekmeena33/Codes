#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
// #define vpi vector <pair<ll ,ll>>
#define mp make_pair
// #define map map<ll,ll>
#define dd double
#define bb bool
#define ff false
#define tt true

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
    string str="hello";
    
    char c;
    int i=0;
    while(cin >> c){
        if(c == str[i]){
            i++;
        }
        if(i==str.size()){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main(){
    FAST
    solve();
    return 0;
}