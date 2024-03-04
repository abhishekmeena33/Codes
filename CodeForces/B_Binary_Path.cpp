#include <bits/stdc++.h>
#include <string>
#include <set>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector <pair<ll ,ll>>
#define mp make_pair
#define mymap map<ll,ll>  // Changed the name from 'map' to 'mymap' to avoid conflict with the 'map' function
#define dd double
#define bb bool
#define ff false
#define tt true
#define all(x) x.begin(), x.end()
#define scan(x,n) for(ll i = 0; i < n; i++) cin >> x[i];

int calculateDigitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

/*===========================================================================================*/

void solve() {
    ll n;
    cin >> n;
    string firstRow, secondRow;
    cin >> firstRow >> secondRow;
    
    string result = "";
    result = firstRow[0];
    
    ll j = 0;
    ll count = 0;
    
    
    for (int i = 1; i < n; i++) {
        if (firstRow[i] == secondRow[j]) {
            count++;
            result += firstRow[i];
            j++;
        } 
        else if (firstRow[i] < secondRow[j]) {
            count = 0;
            result += firstRow[i];
            j++;
        } 
        else break;
    }
    
    
    
    while (j < n) {
        result += secondRow[j];
        j++;
    }
    
    cout << result << "\n" << count + 1;
    return;
}

int main() {
    FAST
    int t; 
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
