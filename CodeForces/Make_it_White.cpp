#include <bits/stdc++.h>
#include <string>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector<pair<ll ,ll>>
#define mp make_pair
#define map map<ll,ll>
#define dd double
#define bb bool
#define ff false
#define tt true

int digit_sum(int n) {
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

    string str;
    cin >> str;

    int start = -1, end = -1;
    for (int i = 0; i < n; ++i) {
        if (str[i] == 'B') {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }

    if (start == -1) {
        cout << "0\n";
    } else {
        cout << end - start + 1 << "\n";
    }
}

int main() {
    FAST
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
