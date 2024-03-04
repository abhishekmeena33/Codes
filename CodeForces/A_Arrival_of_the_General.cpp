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
    vector <int> v(n);

    for(int i = 0; i < n;i++){
        cin >> v[i];
    }
    int max=v[0],min=v[0];
    int min_pos=n-1, max_pos=0;
    for(int i = 0; i < n; i++){
        if(v[n-i-1]>=max){max=v[n-i-1];max_pos=n-i-1;}
        if(v[i]<=min){min=v[i];min_pos=i;}
    }
    
    //cout << max << " " << max_pos << " ||" <<min <<" " <<min_pos ;
    if(v[0]==max && v[n-1]==min){
        cout << "0";
        return 0;
    }
    if(min_pos<max_pos){
        cout << max_pos +(n-min_pos-1) -1;
    }
    else{
        cout << max_pos +(n-min_pos-1);
    }
    // int count = 0;
    // for(int i=0; ;i++){
    //     if(v[0]==max && v[n-1]==min){
    //         cout << count ;
    //         return 0;
    //     }
    //     if(v[i])
    // }

    
    return 0;
}