#include <bits/stdc++.h>
#include <set>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve() {
    ll n;
    cin >> n;

    ll arr[n];
    map<ll, ll> freq;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    ll mex = 0;
    set<ll> set1, set2;

    while (freq[mex] >= 2) {
        set1.insert(mex);
        set2.insert(mex);
        mex++;
    }

    if (freq[mex] > 0) {
        cout << -1 << "\n";
    } else {
        ll splitPoint = 0;
        for (int i = 0; i < n; i++) {
            if (set1.find(arr[i]) != set1.end()) {
                set1.erase(arr[i]);
            }
            if (set1.empty()) {
                splitPoint = i + 1;
                break;
            }
        }

        for (int i = splitPoint; i < n; i++) {
            if (set2.find(arr[i]) != set2.end()) {
                set2.erase(arr[i]);
            }
        }

        if (set2.empty()) {
            cout << 2 << "\n";
            cout << "1 " << splitPoint << "\n";
            cout << splitPoint + 1 << " " << n << "\n";
        } else {
            cout << -1 << "\n";
        }
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
