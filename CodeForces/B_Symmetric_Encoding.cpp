#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve() {
    int n;
    string b;
    cin >> n >> b;

    // Create the string r of distinct characters in sorted order
    set<char> distinct_chars(b.begin(), b.end());
    string r(distinct_chars.begin(), distinct_chars.end());

    // Create a mapping from the encoded character to the original character
    unordered_map<char, char> encode_map;
    int m = r.size();
    for (int i = 0; i < m; ++i) {
        encode_map[r[i]] = r[m - 1 - i];
    }

    // Decode the string b to get the original string s
    string s;
    for (char c : b) {
        s += encode_map[c];
    }

    cout << s << endl;
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
