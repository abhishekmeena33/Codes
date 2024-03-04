#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    FAST
    int n; cin >> n;
    string str; cin >> str;
    if(n<26){
        cout << "NO\n";
        return 0;
    }
    for(int i=0; i<n; i++) {
        str[i] = tolower(str[i]);
    }
    sort(str.begin(), str.end());
    int count = 0;
    
    for(int i=0; i<n; i++){
        if(str[i] ==str[i+1]){
            continue;
        }
        count++;
    }
    // cout << count;
    if(count==26){
        cout << "YES";
    }

    else{
        cout << "NO";
    }
    
    return 0;
}