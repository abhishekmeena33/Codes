#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    string str;
    cin >> str;
    string hello="";
    for(int i=0; i<str.length();i++){
        for(int j=0; j<hello.length();j++){
            if(str[i] == hello[j]){
                continue;
            }
        }
        hello+= str[i];
    }
    cout << hello;
    return 0;
}