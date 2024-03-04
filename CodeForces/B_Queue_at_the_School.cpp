#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int n,t; cin >> n >> t;
    string str; cin >> str;
    for(int j=0; j<t; j++){
        for(int i=0; i<n; i++){
            if(str[i] =='B' && str[i+1]== 'G'){
            str[i] ='G';
            str[i+1] ='B';
            i++;
            }
        }
    }
    cout << str;
    return 0;
}