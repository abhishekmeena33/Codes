#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int t; cin >> t;
    string str;cin >> str;
    int count = 0;
    for(int i = 0; i <str.length(); i++){
        if(str[i] == str[i+1]){
            count++;
        }
    }
    cout << count;
    return 0;
}