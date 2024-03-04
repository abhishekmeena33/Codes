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
    vector <int> mags(t);

    for(int i=0; i<t; i++){
        cin >> mags[i];
    }
    int group = 1;
    for(int i=0; i<t-1; i++){
        if(mags[i]!=mags[i+1]){
            group++;
        }
    }
    cout << group;
    return 0;
}