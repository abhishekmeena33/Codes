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
    string en,me;
    cin >> en >> me ;

    int count = 0;
    
    for(int i=0; i<n; i++){
        
        if(me[i] =='1' && en[i] =='0'){
            count++;me[i] =0;
        }
        else if(en[i] =='1' ){
            if( me[i-1] =='1') 
            {count ++; me[i-1] =0;}
            else if(me[i+1] =='1'){count++; me[i+1] =0;}
        }
        
    }
    
    cout << count ;

    
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