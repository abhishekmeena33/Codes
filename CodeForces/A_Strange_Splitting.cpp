#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (a[0] == a[n-1]) {
            // If all elements are the same, it's impossible to split
            cout << "NO\n";
        } else {
            cout << "YES\n";
            string s(n, 'B'); // Initialize all to blue
            
            // We'll find the median element and color it red
            int median = a[n / 2];
            s[n / 2] = 'R';

            // Check if there's any element equal to the median in the array
            bool exists = false;
            for (int i = 0; i < n; ++i) {
                if (a[i] == median && i != n / 2) {
                    exists = true;
                    break;
                }
            }

            // If no other element is equal to the median, color the next element red
            if (!exists) {
                for (int i = (n / 2) + 1; i < n; ++i) {
                    if (a[i] != median) {
                        s[i] = 'R';
                        break;
                    }
                }
            }
            
            cout << s << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
