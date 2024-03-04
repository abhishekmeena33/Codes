#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    string str1, str2;
    cin >> str1 >> str2 ;
    for(int i = 0; i <str1.length(); i++){
        if(str1[i]!= str2[str2.length()-i-1]){
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES";
    return 0;
}