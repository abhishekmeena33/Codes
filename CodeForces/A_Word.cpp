#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    
}

int main(){
    FAST
    string word;
    cin >> word;
    int upper = 0, lower = 0;
    for(int i = 0; i < word.length(); i++){
        if((int)word[i] >=97){
            lower ++;
        }
        else{
            upper ++;
        }
    }
    if(upper > lower){
        for(int i = 0; i < word.length(); i++){
            if((int)word[i] >=97){
            word[i]-=32;
            }
        }
    }
    else{
        for(int i = 0; i < word.length(); i++){
            if((int)word[i] <=90){
            word[i]+=32;
            }
        }
    }
    cout << word ;
    return 0;
}