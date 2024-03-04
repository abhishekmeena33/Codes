#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    string str;
    cin >> str;

    for(int i = 0; i <str.length();i++){
        if((int)str[i] < 33 || (int)str[i] >126){

            cout << "NO" ;
            return 0;
        }
        if(str[i] == 'H' || str[i] == 'Q' || str[i] =='9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}