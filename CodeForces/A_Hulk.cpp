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

    for(int i = 1; i <=t; i++){
        if(i%2!=0){
            
            cout << "I hate ";
            if(i==t){break;}
        }
        else {
            cout << "I love ";
            if(i==t){break;}
        }
        cout << "that ";
    }
    cout << "it ";
    return 0;
}