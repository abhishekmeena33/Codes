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
    int n; cin >> n;
    string str; cin >> str ;
    string cv="";
    
    for(int i=0; i<n; i++){
        if(str[i]=='a' ||  str[i]=='e'){
            cv+='v';
        }
        else if(str[i]=='b' || str[i]=='c' || str[i]=='d'){
            cv+='c';
        }

    }
    
    cout << str[0];
    for(int i=1; i<n; i++){
        if(cv[i]=='c'){
            if(cv[i-1]=='v' && cv[i+1]=='v'){
                cout << '.' << str[i];
            }
            else if(cv[i-1]=='v' && cv[i+1]=='c'){
                cout << str[i] << '.' ;
            }
            else cout << str[i] ;
        }
        else cout << str[i];
        
    }
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