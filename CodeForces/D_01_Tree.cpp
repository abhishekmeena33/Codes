#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << (v[n-1] <= n-1 ? "YES" : "NO") << "\n";
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
