#include <iostream>
#include <vector>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve() {
    ll n, x;
    cin >> n >> x;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll maxDifference = arr[0];
    for (ll i = 0; i < n - 1; i++) {
        if (maxDifference < (arr[i + 1] - arr[i])) {
            //cout << arr[i+1]-arr[i] ;
            maxDifference = arr[i + 1] - arr[i];
        }
    }

    if (maxDifference < 2 * (x - arr[n - 1])) {

        maxDifference = 2 * (x - arr[n - 1]);
    }

    cout << maxDifference << "\n";
    return ;
}

int main() {
    FAST

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
