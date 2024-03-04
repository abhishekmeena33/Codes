#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int t; cin >> t;
    for(int i=1;;i++){
        if(t>0){
            t-=5;
        }
        if(t<=0){
            cout << i ;
            break ;
        }
    }
    return 0;
}