#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int a; cin >> a;
        if(a==1){
            cout <<"HARD";
            return 0;
        }
    }
    cout <<"EASY";
    return 0;
}