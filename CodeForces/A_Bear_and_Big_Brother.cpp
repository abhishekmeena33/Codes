#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int a,b; cin >> a >> b;
    
    for(int i=0;;i++){
        if(a>b){
            cout << i;
            break;
        }
        a*=3;
        b*=2;
    }
}