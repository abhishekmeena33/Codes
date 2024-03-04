#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    FAST
    long long k,n; 
    cin >> n >> k;
    if(n==k){
        if(n==1){cout << "1";return 0;}
        if(n%2==1){
            cout << (2*n-1)/2;
            return 0;
        }
        cout << n;
        return 0;
    }
    if(k<=(n+1)/2){
            cout << 2*k-1;
            return 0;
    }
    cout << (k -(n+1)/2)*2 ;
    return 0;
}