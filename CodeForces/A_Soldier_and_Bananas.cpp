#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int k,n,w; cin >> k >> n >> w;

    int mon= k*w*(w+1)/2;

    if(mon > n){
        cout << mon -n ;
    }
    else{
        cout << "0" ;
    }

    return 0;
}