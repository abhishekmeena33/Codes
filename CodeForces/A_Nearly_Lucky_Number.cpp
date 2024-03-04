#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    
}

int main(){
    FAST
    string t; cin >> t;
    int count=0;
    for(int i=0;i< t.length();i++){
        if(!((int)t[i] != 52  && (int)t[i] != 55)){
            count ++ ;
        }
    }
    //cout << count;
    if(count== 7  || count== 4){
            cout << "YES" ;
    }
    else {
        cout << "NO";
    }
    return 0;
}