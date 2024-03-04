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
    string str;
    cin >> str;

    string hi="";
    for(int i=0; i<str.length(); i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' 
        || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' || str[i]=='y'){

            continue;
        }

        else{
            hi+='.';
            hi+=tolower(str[i]);
        }
    }
    cout << hi ;
    return 0;
}