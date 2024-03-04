#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    
}

int main(){
    FAST
    int n; cin >> n;
    int p,q;
    cin >>p;
    vector <int> v;

    for(int i=0; i<p; i++){
        int temp; cin >> temp;
        v.push_back(temp);
    }
    cin >> q;
    for(int i=0; i<q; i++){
        int temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());

    int win=0;
    for(int i=0; i<v.size();i++){
        if(v[i]==v[i+1]){
            continue;
        }
        win++;
    }
    if(win==n){
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!" ;
    }
    return 0;
}