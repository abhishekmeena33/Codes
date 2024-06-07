#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll bp = 0;

    
    for (ll j = 0; j < n - 2; ++j) {
        for (ll k = j + 1; k < n - 2; ++k) {
            
            ll aj1 = a[j], aj2 = a[j+1], aj3 = a[j+2];
            ll ak1 = a[k], ak2 = a[k+1], ak3 = a[k+2];

            
            ll dc = 0;
            if (aj1 != ak1) dc++;
            if (aj2 != ak2) dc++;
            if (aj3 != ak3) dc++;

            if (dc == 1) {
                bp++;
            }
        }
    }

    cout << bp << "\n";
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
