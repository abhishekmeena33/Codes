#include <iostream>
#include <algorithm>

using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve() {
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    ll max_occ = 0, curr_occ = 0, l = 0;

    for (ll i = 0; i < n; i++) {
        if ((a[i] - a[l]) > n - 1) {
            max_occ = max(i - l - curr_occ, max_occ);
            l++, i--;

            if (a[l] == a[l - 1]) curr_occ--;
        } else if (l != i && a[i] == a[i - 1]) {
            curr_occ++;
        }
    }

    max_occ = max(n - l - curr_occ, max_occ);
    cout << max_occ;
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
