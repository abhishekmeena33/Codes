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

int main(){
    FAST
    int k; cin >> k;
    
    for(int i=1; i<=k; i++){
        if(i==1){
            cout <<"0";
        }
        else if(i==2){
            cout <<"6";
        }

        else if(i==3){
            cout << 4*(2 +(k-3)*3) 
        }

    }
    return 0;
}