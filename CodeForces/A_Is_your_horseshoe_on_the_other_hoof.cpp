#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    FAST
    vector <int> s(4);

    for(int i = 0; i < s.size();i++){
        cin >> s[i];
    }
    int buy=0;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size()-1;i++){
        if(s[i]==s[i+1]){
            buy++;
        }
    }
    cout << buy;
    return 0;
}