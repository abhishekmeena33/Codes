#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define omk cout <<"YES";
#define nah cout <<"NO";

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*===========================================================================================*/

int main(){
    FAST
    string t; cin >> t;
    string hi="";
    if(t[0]=='-' ){
        for(int i=t.length()-1;i>=0;i--){
            if((t[i]>t[i-1]) && (i==t.length()-1)){
                continue;
            }
            if((t[i]>t[i+1]) && (i==t.length()-2)){
                continue;
            }
            if((t[i]==t[i-1]) && ((i==t.length()-1))){
                i--;
                continue;
            }
            
            hi+=t[i];
        }
        reverse(hi.begin(),hi.end());
        if(hi=="-0"){
            cout << "0";
            return 0;
        }
        cout<< hi;
    }
    else{
        cout << t;
    }
    
    return 0;
}