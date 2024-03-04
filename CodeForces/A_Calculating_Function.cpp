#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    long long n; cin >> n;
    long long fun =0;
    if(n%2==0){
        fun = n-(n-1)+(n-2)/2;
    }
    else{
        fun = -n +(n-1)/2;
    }
    cout << fun;
    return 0;
}