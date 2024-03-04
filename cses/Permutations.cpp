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
    int n; cin >> n;

    if(n==3 || n==2){ cout << "NO SOLUTION"; return 0;}
    
    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout << i << " ";
        }
    }
    for(int i=1; i<=n; i++){
        if(!(i%2==0)){
            cout << i << " ";
        }
    }
    return 0;
}