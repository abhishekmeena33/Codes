#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    
    ll n;
    cin >> n;

    vector<ll> vibes(n);
    for (ll i = 0; i < n; ++i) {
        cin >> vibes[i];
    }
    
    vector<ll> hi(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (vibes[j] > vibes[i] && hi[j] + 1 > hi[i]) {
                hi[i] = hi[j] + 1;
            }
        }
    }

    
    int maxDecLength = *max_element(hi.begin(), hi.end());

    cout << n - maxDecLength -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
        cout << "\n";
    }

    return 0;
}
