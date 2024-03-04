#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    FAST
    int n; cin >> n;
    if(n==1){
        cout << "1";
        return 0;
    }
    int tsum =0;
    vector <int > c(n);

    for(int i=0; i<n; i++){
        cin >> c[i];
        tsum += c[i];
    }
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    int sum =0;

    for(int i=0; i<n; i++){
        if(sum>=tsum-sum){
            if(sum==tsum-sum){
                cout << i+1;
                break ;
            }
            cout << i ;
            break;
        }
        sum+=c[i];
    }
    return 0;
}