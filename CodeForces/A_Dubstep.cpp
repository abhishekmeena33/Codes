#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve(){
    
}

int main(){
    FAST
    string dub; cin >> dub;
    for(int i = 0; i <dub.length();i++){
        if(dub[i]=='W' && dub[i+1]=='U' && dub[i+2]=='B'){
            // if(i==0){
            //     continue;
            // }
            //cout << i << " " ;
            i=i+2;
            
            if(dub[i]=='B' && dub[i+1]=='W' && dub[i+2]=='U'){
                //cout << "HEEEEEEE";
                continue;
            }
            cout << " " ;
        }
        else{
            cout << dub[i] ;
        }
    }
    return 0;
}