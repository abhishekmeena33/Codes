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
    int n,m;cin >> n >> m;
    vector <int> tv(n);

    for(int i=0;i<n;i++) {
        cin >> tv[i];
    }
    sort(tv.begin(),tv.end());
    int sale = 0;
    for(int i=0;i<m;i++) {
        if(tv[i] >0) break; 
        sale+=abs(tv[i]);
    }
    cout << sale ;
    
    return 0;
}