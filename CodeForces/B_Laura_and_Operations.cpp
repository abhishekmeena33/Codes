#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);

  int T;
  cin >> T;

  while (T--) {
    int a[3];
    for (int& x: a) cin >> x;

    for (int i = 0; i < 3; i++) {
      cout << (a[i] % 2 == (a[0] + a[1] + a[2]) % 2) << ' ';
    }
    cout << '\n';
  }
}
