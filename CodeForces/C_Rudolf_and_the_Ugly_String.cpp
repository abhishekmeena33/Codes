#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
void solve() {
    ll n;
    cin >> n;

    string s;
    cin >> s;
    ll deletions = 0;

    for (int i = 0; i < n - 2; ++i) {
        if (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map") {
            deletions++;
            i += 2;  
        }
    }

    cout <<  deletions;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
