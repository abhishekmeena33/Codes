#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



int main(){
    FAST
    string str; cin >> str;

    if(str[0]>= 'a'){
        str[0] -= 32;
    }
    cout << str ;
    return 0;
}