#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// void solve(){
    
// }

int main(){
    FAST
    // int t; cin >> t;
    // while(t--){
    //     solve();
    // }
    string name;
    string temp="";
    cin >>name;
    int cnt =0;
    sort(name.begin(), name.end());
    for(int i=0; i<name.length(); i++){
        if(name[i]!=name[i+1]){
            cnt++;
        }
    }
    if(cnt%2==0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0;
}