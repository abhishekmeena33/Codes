#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int num, n;
    cin >> num >> n ;
    
    for(int i = 0; i < n;i++){
        if(num %10 ==0){
            num /= 10;
        }
        else {
            num-- ;
        }
    }
    cout << num ;
    return 0;
}