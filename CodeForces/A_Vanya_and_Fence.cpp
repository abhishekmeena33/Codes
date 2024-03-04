#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int n,h; cin >> n >> h ;
    vector <int > v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int count =0;
    for(int i=0; i<n; i++){
        if(v[i]>h){
            count +=2 ;
        }
        else{
            count++;
        }
    }
    cout << count;
    return 0;
}