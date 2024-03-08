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
    ll n; cin >> n;
    
    if((n*(n+1)/2)%2!=0){
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    ll sum=0;
    vector <ll> a,b;
    ll targetSum = (n * (n + 1)) / 4;
    vector<bool> chosen(n + 1, false);
    ll currentSum = 0;

    for (ll i = n; i >= 1; i--) {
        if (currentSum + i <= targetSum) {
            currentSum += i;
            chosen[i] = true;
        }
    }

    for (ll i = 1; i <= n; i++) {
        if (chosen[i]) {
            a.push_back(i);
        } else {
            b.push_back(i);
        }
    }
    cout << a.size() << "\n";
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << "\n" << b.size() << "\n";
    for(int i=0;i<b.size();i++){
        cout << b[i] << " ";
    }                                   
    return 0;
}