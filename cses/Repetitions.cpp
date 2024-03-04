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
    string str; cin >> str;
    vector <int> arr;
    ll count = 1;
    for(int i=0; i<str.length(); i++){
        if(str[i]==str[i+1]) count++;
        
        else {
            arr.push_back(count);
            count=1;
        }
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    cout <<  arr[0] << endl;
    return 0;
}